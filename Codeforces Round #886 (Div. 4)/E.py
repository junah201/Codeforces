import sys
input = sys.stdin.readline

T = int(input())

tmptmp = []


def solve():
    N, C = map(int, input().split())
    A = list(map(int, input().split()))

    low = 1
    high = 2147483647

    while low <= high:
        mid = (low + high) // 2

        # tmptmp.append(mid)

        tsum = sum(
            [
                (i + mid * 2) * (i + mid * 2)
                for i in A
            ]
        )

        if tsum == C:
            print(mid)
            return

        if tsum > C:
            high = mid - 1
        else:
            low = mid + 1

    print(low + mid)


for _ in range(T):
    solve()
    # print(len(tmptmp))
    # print(tmptmp)
    # tmptmp = []
