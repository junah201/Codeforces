import sys

input = sys.stdin.readline

N = int(input())

for _ in range(N):
    A = list(map(int, input().split()))
    if sum(A) - min(A) >= 10:
        print("YES")
    else:
        print("NO")
