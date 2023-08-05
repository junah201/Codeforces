import sys
input = sys.stdin.readline

T = int(input())


def solve():
    N = int(input())
    A = list(map(int, input().split()))

    ans = 0

    for i in range(N - 1):
        if A[i] > A[i + 1]:
            ans = max(ans, A[i])

    print(ans)


for _ in range(T):
    solve()
