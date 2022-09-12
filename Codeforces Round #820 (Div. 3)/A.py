T = int(input())
for _ in [0]*T:
    A, B, C = map(int, input().split())
    tmp1 = A
    if B < C:
        tmp2 = C - B + C
    else:
        tmp2 = B

    if tmp1 == tmp2:
        print(3)
    elif tmp1 < tmp2:
        print(1)
    else:
        print(2)
