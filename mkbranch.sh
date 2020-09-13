#!/usr/bin/env bash

git checkout -b abc$1
rename NNN $1 abcNNN_*
rm mkbranch.sh
git add . && git commit -m "Initial commit"