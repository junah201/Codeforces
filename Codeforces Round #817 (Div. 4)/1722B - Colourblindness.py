# B. Colourblindness
# 170191899	Aug/31/2022 00:01UTC+9	junah	B - Colourblindness	Python 3	Accepted	46 ms	0 KB

for _ in [0]*int(input()):
    lenth = int(input())
    string1 = input().replace('G', 'B')
    string2 = input().replace('G', 'B')

    if(string1 == string2):
        print("YES")
    else:
        print("NO")
