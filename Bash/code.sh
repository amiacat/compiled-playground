#!/usr/bin/bash

NAME=""

echo "Type your name:"

read $NAME

if $NAME -et "cat"; then
    echo "\nFoda kkk"
fi