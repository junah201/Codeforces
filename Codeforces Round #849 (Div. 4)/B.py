T = int(input())


def solve():
    N = int(input())
    A = list(input())

    x = 0
    y = 0

    for i in A:
        if i == "U":
            y += 1
        elif i == "D":
            y -= 1
        elif i == "L":
            x -= 1
        elif i == "R":
            x += 1

        if x == 1 and y == 1:
            return 1

    return 0


for _ in range(T):
    if (solve()):
        print("YES")
    else:
        print("NO")
