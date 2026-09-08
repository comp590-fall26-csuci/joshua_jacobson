import sys

def fib(x, file):
    if x == 0:
        return 0
    if x == 1:
        # This is kind of a hack to get the first two values.
        # we won't ever get into the x = 0 case where file
        # will not be None, but since we get into this case only
        # once as the very first time we are attempting to write,
        # we can use that as the time to print both the first
        # and second values of the sequence.
        if file is not None:
            file.write("0\n1\n")
        return 1
    value = fib(x-1, file) + fib(x-2, None)
    if file is not None:
        file.write(f"{value}\n")
    return value

if __name__ == '__main__':
    with open("output/output.txt", "w") as output:
        fib(24, output)
