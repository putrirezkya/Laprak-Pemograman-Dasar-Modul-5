def MaxBilangan(a, b, c, d):
    angka = [a, b, c, d]
    terbesar = angka[0]

    for i in angka:
        if i > terbesar:
            terbesar = i

    return terbesar


while True:
    data = input()

    if data == "":
        break

    a, b, c, d = map(int, data.split())
    hasil = MaxBilangan(a, b, c, d)

    print(hasil)