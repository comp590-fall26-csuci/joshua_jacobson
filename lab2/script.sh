#!/bin/bash

for Output in $(sort passwords.txt)
do
	echo "$Output"
done

passwordNumber=1
for Password in $(cat passwords.txt)
do
	echo "$Password" > "Password$passwordNumber"
	((passwordNumber++))
done
