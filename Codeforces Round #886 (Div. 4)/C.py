import sys

input = sys.stdin.readline

T = int(input())


def solve():
    A = [
        list(input().rstrip())
        for _ in range(8)
    ]

    ans = ""

    for x in range(8):
        for y in range(8):
            if A[y][x] == '.':
                continue

            ans += A[y][x]

    print(ans)


for _ in range(T):
    solve()
