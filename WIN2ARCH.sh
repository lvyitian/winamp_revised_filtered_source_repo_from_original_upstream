#!/bin/bash
#Achie's Cute little windows to arch script, I HATE WINDOWS!!!
if [ -z "$1" ]; then
    echo "Usage: $0 <directory>"
    exit 1
fi
DIRECTORY="$1"
find "$DIRECTORY" -type f -exec sed -i 's/windows/arch/g' {} +

echo "Made the code better and made it work."
echo "Love, Archie"
