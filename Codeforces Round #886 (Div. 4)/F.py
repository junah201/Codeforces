import sys

input = sys.stdin.readline

T = int(input())


def solve():
    N = int(input())
    A = [i for i in list(map(int, input().split())) if i <= N]

    ans = [
        0 for _ in range(N+1)
    ]

    for i in A:
        init = i
        while i <= N:
            ans[i] += 1
            i += init

    print(max(ans))


for _ in range(T):
    solve()
