T = int(input())


def solve():
    N = int(input())
    A = list(input())

    start = 0
    end = N - 1

    while start <= end:
        if A[start] == '0' and A[end] == '1':
            start += 1
            end -= 1
        elif A[start] == '1' and A[end] == '0':
            start += 1
            end -= 1
        else:
            break

    return end - start + 1


for _ in range(T):
    print(solve())
