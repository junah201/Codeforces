# A. Spell Check
# 170184048	Aug/30/2022 23:57UTC+9	junah	A - Spell Check	Python 3	Accepted	46 ms	0 KB

import itertools

nPr = ["".join(i)
       for i in itertools.permutations(['T', 'i', 'm', 'u', 'r'], 5)]

for _ in [0] * int(input()):
    lenth = int(input())
    string = input()

    if lenth != 5:
        print("NO")
        continue
    if string in nPr:
        print("YES")
    else:
        print("NO")
