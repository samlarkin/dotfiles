#!/bin/sh
# Generate new note and open vim to edit it

FILENAME="$HOME/notes/$(date +%Y-%m-%d)_notes.md"

if [ ! -f $FILENAME ]; then
    echo "# Notes for $(date +%Y-%m-%d)" > $FILENAME
fi

vim -c "norm Go" \
    -c "norm Go## $(date +%H:%M)" \
    -c "norm zz" \
    -c "startinsert" $FILENAME
