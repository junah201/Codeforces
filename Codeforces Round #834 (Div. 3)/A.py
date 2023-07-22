import sys

N = int(sys.stdin.readline())

origin = "Yes"

for k in range(N):
    msg = sys.stdin.readline().strip()
    start = -1
    if msg[0] == "Y":
        start = 0
    elif msg[0] == "e":
        start = 1
    elif msg[0] == "s":
        start = 2

    # print(k, start, msg)

    if start == -1:
        print("NO")
        continue

    for i in range(len(msg)):
        if msg[i] != origin[(start + i) % 3]:
            print("NO")
            start = -1
            break

    if start != -1:
        print("YES")
