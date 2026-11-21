def reverse(n):
    hasil = 0
    while n > 0:
        digit = n % 10
        hasil = hasil * 10 + digit
        n = n // 10
    return hasil


A, B = map(int, input().split())

A = reverse(A)
B = reverse(B)

C = A + B

print(reverse(C))