import sys

def fib():
    with open("output/output.txt", "w") as output:
        x1 = 0
        output.write(f"{x1}\n")
        x2 = 1
        output.write(f"{x2}\n")
        for _ in range(2, 25):
            x3 = x2 + x1
            output.write(f"{x3}\n")
            x1 = x2
            x2 = x3

if __name__ == '__main__':
    fib()
