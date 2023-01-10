#!/bin/bash

for ((i=1000; i>=1; i--)); do
    echo -n "$i "
    x=$((x+1))
    if ((x%5==0)); then
        echo
    fi
done

