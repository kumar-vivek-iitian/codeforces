def solve():
    input()
    n = input()
    m = input()
    opr = 0
    while len(n) <= 160 :
        if m in n: 
            print(opr)
            return
        n += n
        opr += 1
    print(-1)


for _ in range(int(input())):
    solve()
