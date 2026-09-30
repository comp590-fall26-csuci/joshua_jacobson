#!/bin/bash

echo "Running fib main"
output="$(./../lab4/main)"
echo "$output"
verification=true
grep_output=$(grep -F "The 10th Fibonacci number is 55" <<< "$output")
exit_code=$?
if [ $exit_code -ne 0 ]; then
	echo "Failed to verify the 10th fibonacci number is 55"
	verification=false
else
	echo "Verified 10th fibonacci number"
fi
grep_output=$(grep -F "The theoretical Golden Ratio is 1.618034" <<< "$output")
exit_code=$?
if [ $exit_code -ne 0 ]; then
	echo "Failed to verify the theoretical Golden Ratio is 1.618034"
	verification=false
else
	echo "Verified Golden Ratio"
fi

if $verification; then
	echo "Output Verified Successful"
else
	echo "Output Verification Failed"
fi
