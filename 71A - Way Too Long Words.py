# A. Way Too Long Words
# 146937126	Feb/19/2022 22:30UTC+9	junah	71A - Way Too Long Words	Python 3	Accepted	46 ms	0 KB

for _ in range(int(input())):
    string = input()
    if len(string)  <= 10:
        print(string)
        continue;
    print(string[0]+str(len(string) - 2)+string[-1])