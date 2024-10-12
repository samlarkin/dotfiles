#!/bin/sh
files_today= ls $HOME/notes | grep $($HOME/.vim/sh/today.sh)

echo $files_today
if [ grep "0.md" $files_today ] then
    echo "1"
fi
