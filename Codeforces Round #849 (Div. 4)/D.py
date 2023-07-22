T = int(input())


def solve():
    N = int(input())
    A = list(input())
    DP1 = [0] * N
    DP2 = [0] * N

    K = set()
    G = set()

    for idx, value in enumerate(A):
        K.add(value)
        DP1[idx] = len(K)

    for idx, value in enumerate(A[::-1]):
        G.add(value)
        DP2[N - idx - 1] = len(G)

    DP3 = [DP1[i] + DP2[i + 1] for i in range(N - 1)]
    return max(DP3)


for _ in range(T):
    print(solve())
