#!/usr/bin/env bash
[[$1 == '']] && echo "Need branch name(contest No)." && exit 1

git branch -b abc$1
rename NNN $1 abcNNN_*
rm mkbranch.sh