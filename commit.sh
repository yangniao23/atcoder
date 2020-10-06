#!/usr/bin/env bash
for i in a b c d; do
    git add *_${i}.cpp
    git commit
done
rm commit.sh *.out
git push --all origin
git checkout master
git checkout .