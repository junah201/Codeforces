import sys

input = sys.stdin.readline

T = int(input())


def solve():
    N = int(input())
    A = []
    for i in range(N):
        w, q = map(int, input().split())
        if w > 10:
            continue
        A.append((q, i + 1))

    A.sort()
    print(A[-1][1])


for _ in range(T):
    solve()
