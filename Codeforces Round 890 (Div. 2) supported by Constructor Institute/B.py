import sys
input = sys.stdin.readline

T = int(input())


def solve():
    N = int(input())
    A = list(map(int, input().split()))

    if N == 1:
        print("NO")
        return

    cnt_1 = A.count(1)
    sum_A = sum(A)

    if sum_A < N + cnt_1:
        print("NO")
        return

    print("YES")


for _ in range(T):
    solve()
