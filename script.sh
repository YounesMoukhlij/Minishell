!#/bin/bash

cp -r * ~/Desktop/my_minishell

git checkout main
git add . && git commit -m 'push' && git push

cd ~/Desktop/my_minishell
git add . && git commit -m 'push' && git push

cd -