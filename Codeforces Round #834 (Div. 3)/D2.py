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


T = int(sys.stdin.readline())

for _ in range(T):
    N, M = map(int, sys.stdin.readline().split())

    if (N % 2 == 1 and M < 10) or (N % 2 == 0 and M < 5):
        print(N * M)
        continue

    #print("N", N, M)

    ans_num = 0
    ans_cnt = -1

    tmp_num = N * (M - M % 2)
    tmp_cnt = count_zero(tmp_num)

    #print("2:", tmp_num, tmp_cnt)

    if tmp_cnt > ans_cnt:
        ans_num = tmp_num
        ans_cnt = tmp_cnt
    elif tmp_cnt == ans_cnt:
        ans_num = max(ans_num, tmp_num)

    tmp_num = N * (M - M % 5)
    tmp_cnt = count_zero(tmp_num)
    #print("5:", tmp_num, tmp_cnt)
    if tmp_cnt > ans_cnt:
        ans_num = tmp_num
        ans_cnt = tmp_cnt
    elif tmp_cnt == ans_cnt:
        ans_num = max(ans_num, tmp_num)

    mod = 10
    while True:
        if mod > N * M:
            break

        #print(mod, ans_num, ans_cnt)

        tmp_num = N * (M - M % mod)
        tmp_cnt = count_zero(tmp_num)
        #print(f"{mod}:", tmp_num, tmp_cnt)
        if tmp_cnt > ans_cnt:
            ans_num = tmp_num
            ans_cnt = tmp_cnt
        elif tmp_cnt == ans_cnt:
            ans_num = max(ans_num, tmp_num)

        mod *= 10

    mod = 2
    while True:
        if mod > N * M:
            break

        #print(mod, ans_num, ans_cnt)

        tmp_num = N * (M - M % mod)
        tmp_cnt = count_zero(tmp_num)
        #print(f"{mod}:", tmp_num, tmp_cnt)
        if tmp_cnt > ans_cnt:
            ans_num = tmp_num
            ans_cnt = tmp_cnt
        elif tmp_cnt == ans_cnt:
            ans_num = max(ans_num, tmp_num)

        mod *= 10

    mod = 5
    while True:
        if mod > N * M:
            break

        #print(mod, ans_num, ans_cnt)

        tmp_num = N * (M - M % mod)
        tmp_cnt = count_zero(tmp_num)
        #print(f"{mod}:", tmp_num, tmp_cnt)
        if tmp_cnt > ans_cnt:
            ans_num = tmp_num
            ans_cnt = tmp_cnt
        elif tmp_cnt == ans_cnt:
            ans_num = max(ans_num, tmp_num)

        mod *= 10

    print(ans_num)
