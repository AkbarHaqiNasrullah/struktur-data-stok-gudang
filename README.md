# Program Stok Gudang Toko Buwong Puyuh (Searching dan Sorting)

Project mata kuliah Struktur Data (Kelompok 9). Program C++ untuk mencatat stok barang gudang, mengurutkannya berdasarkan kode barang, lalu mencari barang berdasarkan kode.

## Fitur

- Input data barang (kode, nama, stok, lokasi), maksimal 10 data
- Menampilkan data stok barang
- **Sorting**: Bubble Sort berdasarkan kode barang terkecil
- **Searching**: Sequential Search berdasarkan kode barang

## Konsep yang Diterapkan

- Struct (`typedef struct`) dan array of struct
- Bubble Sort
- Sequential Search
- Input/output C++ (`iostream`)

## Teknologi

- C++
- Dev-C++ / Code::Blocks / g++

## Cara Menjalankan

Lewat compiler (g++):

```
g++ stok_barang.cpp -o stok_barang
./stok_barang
```

Atau buka `stok_barang.cpp` di Dev-C++ / Code::Blocks, lalu klik Compile & Run.

## Contoh Penggunaan

1. Masukkan banyak data, misalnya `3`.
2. Isi kode, nama, stok, dan lokasi tiap barang.
3. Program menampilkan data, lalu menampilkannya lagi setelah diurutkan.
4. Masukkan kode barang untuk dicari.

## Dibuat Oleh

- Akbar Haqi Nasrullah