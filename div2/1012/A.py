import math
for _ in range(int(input())):
    x,y,a = map(int, input().split())
    a = a + 0.5
    ans = math.ceil(a / (x + y))
    if (ans % 2 == 0) : print("NO")
    else : print("YES")