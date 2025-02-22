from sys import stdin, stdout

mod = 998244353

MAX_N = 200000  
power = [1] * (MAX_N + 1)
inv_power = [1] * (MAX_N + 1)

for i in range(1, MAX_N + 1):
    power[i] = (power[i - 1] * 2) % mod
inv_power[MAX_N] = pow(power[MAX_N], mod - 2, mod) 
for i in range(MAX_N - 1, -1, -1):
    inv_power[i] = (inv_power[i + 1] * 2) % mod

input = stdin.readline
write = stdout.write

def solve():
    n = int(input())
    data = list(map(int, input().split()))
    
    dp = [0] * n
    dp[0] = 1 if data[0] == 2 else 0
    for i in range(1, n):
        dp[i] = dp[i - 1] + (1 if data[i] == 2 else 0)
    
    ans, sumi, cnt = 0, 0, 0
    for i in range(n):
        if data[i] == 3:
            cnt += 1
            sumi = (sumi + power[dp[i]]) % mod
    
    for i in range(n):
        if data[i] == 1:
            ans = (ans + sumi * inv_power[dp[i]] - cnt) % mod
        
        if data[i] == 3:
            cnt -= 1
            sumi = (sumi - power[dp[i]]) % mod
    
    write(str(ans) + "\n")

t = int(input())
for _ in range(t):
    solve()
