for _ in range(int(input())):
    n, m, a, b = map(int, input().split())
    x = min(a, n - a + 1)
    y = min(b, m - b + 1)
    first = (x - 1).bit_length() + (m - 1).bit_length()
    second = (n - 1).bit_length() + (y - 1).bit_length()
    print(max(first, second) + 1)