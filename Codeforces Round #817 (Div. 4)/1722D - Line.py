# D. Line
# 170234040	Aug/31/2022 00:29UTC+9	junah	D - Line	Python 3	Accepted	623 ms	15900 KB

for _ in [0]*int(input()):
    lenth = int(input())
    string = list(input())

    result = []
    add = []

    for i in range(lenth):
        if string[i] == 'L':
            result.append(i)
        elif string[i] == 'R':
            result.append(lenth - i - 1)

        if result[i] == max(i, lenth - i - 1):
            add.append(0)
        else:
            add.append(max(i, lenth - i - 1) - min(i, lenth - i - 1))

    add.sort(reverse=True)

    answer = []
    Rsum = sum(result)

    for i in add:
        Rsum += i
        answer.append(Rsum)

    print(*answer)
