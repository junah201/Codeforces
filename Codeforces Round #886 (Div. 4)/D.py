import sys

input = sys.stdin.readline

T = int(input())


def solve():
    N, K = map(int, input().split())
    A = list(map(int, input().split()))

    A.sort()

    # start
    try:
        if abs(A[0] - A[1]) > K:
            A.pop(0)
    except IndexError:
        pass

    ans = 1

    new_A = []
    new_A.append(A[0])

    for i in range(1, len(A)):
        if abs(A[i] - A[i - 1]) > K:
            new_A = []

        new_A.append(A[i])
        ans = max(ans, len(new_A))

    print(N - ans)


for _ in range(T):
    solve()
