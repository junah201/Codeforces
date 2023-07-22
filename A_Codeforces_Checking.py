a = "codeforces"
a = list(a)

T = int(input())
for _ in range(T):
    N = input()

    if (N in a):
        print("YES")
    else:
        print("NO")
