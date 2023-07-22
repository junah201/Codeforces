import sys

input = sys.stdin.readline

T = int(input())


def solve():
    N = int(input())
    A = list(map(int, input().split()))

    is_P: bool = False
    is_N: bool = False

    for i in range(1, len(A)):
        is_P = is_P or A[i] > A[i - 1]
        is_N = is_N or (is_P and A[i] < A[i - 1])

        if is_N:
            return 0

    return 1


for _ in range(T):
    if (solve()):
        print("YES")
    else:
        print("NO")
