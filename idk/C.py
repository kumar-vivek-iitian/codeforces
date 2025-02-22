from sys import stdin, stdout

input = stdin.readline
print = stdout.write

mod = 998244353
for i in range(int(input())):
    dp = []
    int(input())
    data = list(map(int, input().split()))

    dp.append(1 if data[0] == 2 else 0)
    for j in range(1, len(data)):
        dp.append(dp[j - 1] + (1 if data[j] == 2 else 0))
    
    ans, sumi, cnt = 0, 0, 0
    for j in range(0, len(data)):
        if (data[j] == 3) :
            cnt += 1
            sumi = (sumi + pow(2, dp[j], mod)) % mod 
    
    for j in range(0, len(data)):
        if (data[j] == 1) : 
            ans = (ans + sumi * pow(pow(2, dp[j], mod), -1, mod) - cnt) % mod 
            
        if (data[j] == 3) :
            cnt -= 1
            sumi = (sumi - pow(2, dp[j], mod)) % mod 
    
    print(str(ans) + "\n")
