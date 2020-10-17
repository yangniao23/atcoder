#!/usr/bin/env bash
rm commit.sh *.out
for i in a b c d; do
    git add *_${i}.cpp    
    git commit
done
git rm commit.sh
git commit -m "Remove 'commit.sh'"
git push --all origin
git checkout master
git checkout .