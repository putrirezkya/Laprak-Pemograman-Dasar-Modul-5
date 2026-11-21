def hitung(nilai1, nilai2):
    return nilai1 - nilai2


def mutlak(angka):
    if angka < 0:
        return -angka
    else:
        return angka


while True:
    try:
        data = input().split()

        if len(data) == 0:
            break

        x1, y1, x2, y2 = map(int, data)

        hasil = mutlak(hitung(x1, x2)) + mutlak(hitung(y1, y2))

        print(hasil)

    except EOFError:
        break