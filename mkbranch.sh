#!/usr/bin/env bash

git checkout -b $1
rename abcNNN $1 abcNNN_*
rm mkbranch.sh
git add . && git commit -m "Initial commit"