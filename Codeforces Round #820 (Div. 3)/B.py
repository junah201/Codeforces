import sys
input = sys.stdin.readline

T = int(input())
for _ in [0]*T:
    N = int(input())
    string = input()

    for i in range(10, 27):
        string = string.replace(f"{i}0", chr(i + 96))
    for i in range(1, 10):
        string = string.replace(f"{i}", chr(i + 96))

    print(string, end="")
