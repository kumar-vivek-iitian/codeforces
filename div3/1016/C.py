def isPrime(x) :
	x = int(x)
	if x in (1, 0) : return False
	i = 2
	while(i * i <= x) :
		if x % i == 0 :
			return False
		i += 1
	return True

for _ in range(int(input())):
	x, k = map(int, input().split())
	if x == 1:
		x = str(x) * k
		if isPrime(x) : print("YES")
		else : print("NO")
	else:
		if k > 1 : print("NO")
		else :
			if isPrime(x) : print("YES")
			else: print("NO")

