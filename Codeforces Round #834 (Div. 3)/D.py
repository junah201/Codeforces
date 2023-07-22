import sys


def count_zero(num: int):
    result = 0
    while num:
        if num % 10 == 0:
            result += 1
        else:
            break
        num = num // 10

    return result


def count_two(num: int):
    result = 0
    while num:
        if num % 2 == 0:
            result += 1
        else:
            break
        num = num // 2

    return result


def count_five(num: int):
    result = 0
    while num:
        if num % 5 == 0:
            result += 1
        else:
            break
        num = num // 5

    return result


T = int(sys.stdin.readline())

for _ in range(T):
    N, M = map(int, sys.stdin.readline().split())

    if (N % 2 == 1 and M < 10) or (N % 2 == 0 and M < 5):
        print(N * M)
        continue

    two = count_two(N)
    five = count_five(N)

    need_two = 0
    need_five = 0

    if two > five:
        need_five = two - five
    else:
        need_two = five - two

    ans_num = 0
    ans_cnt = -1

    #print(two, five, need_two, need_five)

    i = -min(need_two, need_five)
    while True:
        tmp_num = 1 * (2 ** (need_two - +i)) * (5 ** (need_five + i))

        tmp2 = M - M % tmp_num
        tmp3 = N * tmp2

        if tmp3 > N * M:
            break

        tmp_cnt = min(two + need_two - i, five + need_five - i)
        #print("Tc", tmp_cnt)
        if tmp_cnt > ans_cnt and not tmp3 == 0:
            ans_num = tmp3
            ans_cnt = tmp_cnt
        elif tmp_cnt == ans_cnt and not tmp3 == 0:
            ans_num = max(ans_num, tmp3)

        i += 1

    print(ans_num)
