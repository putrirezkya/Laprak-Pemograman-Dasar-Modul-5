def Biodata(tahunLahir, nama, asal):
    tahun_sekarang = 2020
    umur = tahun_sekarang - tahunLahir

    print("Perkenalkan Nama Saya :", nama)
    print("Umur Saya :", umur)
    print("Saya Adalah Angkatan :", tahun_sekarang)
    print("Asal Saya dari :", asal)


while True:
    tahunLahir = int(input())
    nama = input()
    asal = input()

    Biodata(tahunLahir, nama, asal)

    ulang = input("Ulangi? (y/n): ")
    if ulang.lower() != 'y':
        break