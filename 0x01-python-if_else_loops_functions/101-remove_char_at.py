#!/usr/bin/python3
# Author - Mondli

def remove_char_at(str, b):
    if b < 0:
        return (str)
    return (str[:b] + str[b+1:])
