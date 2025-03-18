for _ in range(int(input())):
    a, b = map(int, input().split())
    s = sum(list(map(int, input().split())))
    if s / b == a: print("YES")
    else : print("NO")