import sys
input = sys.stdin.readline
for i in range(int(input())):
    n = int(input())
    x = list(map(int, input().split()))
    ans = sum(x)
    for i in range(1, n):
        y = [0]*(len(x)-1)
        for j in range(1, len(x)):
            y[j-1] = x[j] - x[j-1] 
        ans = max(abs(x[-1] - x[0]), ans)
        x = y
    print(ans)