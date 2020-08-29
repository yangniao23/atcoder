for i in a b c d; do
    git add *_${i}.cpp
    git commit
rm commit.sh *.out