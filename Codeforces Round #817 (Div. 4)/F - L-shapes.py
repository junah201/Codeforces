shapes = [
    [[0, 1], [1, 0]],
    [[1, 0], [1, 1]],
    [[-1, 1], [0, 1]],
    [[0, 1], [1, 1]]
]

dx = [0, 0, -1, 1, 1, 1, -1, -1]
dy = [-1, 1, 0, 0, 1, -1, -1, 1]

EXIT = 0
ANS = 0
Y = 0
X = 0

inp = []
check = []


def dfs(x: int, y: int):
    global inp
    global check
    global ANS
    global EXIT
    global X
    global Y

    if EXIT:
        return
    for i in range(8):
        rx = x + dx[i]
        ry = y + dy[i]

        if (rx < 0) or (rx >= X) or (ry < 0) or (ry >= Y):
            continue

        if inp[ry][rx] == '*' and not check[ry][rx]:
            EXIT = 1
            ANS = 0
            return


def solve():
    global inp
    global check
    global ANS
    global EXIT
    global X
    global Y

    ANS = 1
    EXIT = 0

    Y, X = map(int, input().split())

    inp = []

    for _ in range(Y):
        inp.append(list(input()))

    check = [[0 for _ in range(X)] for _ in range(Y)]

    for y in range(Y):
        for x in range(X):
            if inp[y][x] == '*' and not check[y][x]:
                # shape
                for shape in shapes:
                    dx1 = x + shape[0][0]
                    dy1 = y + shape[0][1]
                    dx2 = x + shape[1][0]
                    dy2 = y + shape[1][1]

                    if dx1 < 0 or dx1 >= X or dy1 < 0 or dy1 >= Y:
                        continue

                    if dx2 < 0 or dx2 >= X or dy2 < 0 or dy2 >= Y:
                        continue

                    if inp[dy1][dx1] == '*' and inp[dy2][dx2] == '*':
                        check[y][x] = 1
                        check[dy1][dx1] = 1
                        check[dy2][dx2] = 1

                        dfs(x, y)
                        dfs(dx1, dy1)
                        dfs(dx2, dy2)

                        if ANS == 0:
                            print("NO")
                            return

                if not check[y][x]:
                    print("NO")
                    return

    print("YES")


def main():
    for i in [0]*int(input()):
        solve()


ㄸ

main()
