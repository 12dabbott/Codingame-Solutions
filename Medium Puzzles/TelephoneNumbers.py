import sys
import math

_end = '_end_'
a = dict()

def insert_trie(a, word, count):
    current_dict = a
    for let in word:
        if let not in current_dict:
            count += 1
        current_dict = current_dict.setdefault(let, {})
    current_dict[_end] = _end
    return (a, count)

count = 0
n = int(input())
for i in range(n):
    telephone = input()
    a, count = insert_trie(a, telephone, count)

print(count)
