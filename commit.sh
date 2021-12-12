#!/usr/bin/env bash
rm commit.sh *.out
git add *.cpp
git commit
git rm commit.sh
git commit -m "Remove 'commit.sh'"
git push --all origin
git checkout master
git checkout .
