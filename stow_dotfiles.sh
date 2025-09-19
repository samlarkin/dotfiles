#!/usr/bin/env bash
for d in *; do
    if [ -d "$d" ]; then
        echo "Stowing: $d"
        stow --dotfiles "$d"
    fi
done
