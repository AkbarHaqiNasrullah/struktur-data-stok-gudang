// PROGRAM MENGGUNAKAN SEARCHING DAN SORTING
// Pembuatan Program Stok Barang Berbasis C++

#include <iostream>
#include <string.h>

using namespace std;

// Mendefinisikan tipe data baru untuk barang
typedef struct {
	int kode;
	char nama[25];
	int ukuran;
	int stock;
	char lokasi[25];
} brg;

brg barang[10];
brg temp;
int a, i, c, cari, ada;

int main()
{
	cout<<"\t\t"<<"========================================================================="<<endl;
	cout<<"\t\t"<<"|                  PROGRAM SEARCHING DAN SORTING                        |"<<endl;
	cout<<"\t\t"<<"|                            KELOMPOK 9                                 |"<<endl;
	cout<<"\t\t"<<"|                           STOK GUDANG                                 |"<<endl;
	cout<<"\t\t"<<"|                        TOKO BUWONG PUYUH                              |"<<endl;
	cout<<"\t\t"<<"========================================================================="<<endl;

	cout<<"\nMasukkan banyak data (maks 10) : ";
	cin>>a;
	if (a > 10) a = 10;
	if (a < 1) a = 1;

	// INPUT DATA
	for (i=0; i<a; i++) {
		cout<<endl;
		cout<<"Data ke-"<<(i+1)<<":"<<endl;
		cout<<"Input Kode Barang   : "; cin>>barang[i].kode;
		cin.ignore(1000, '\n');
		cout<<"Input Nama Barang   : "; cin.getline(barang[i].nama, 25);
		cout<<"Input Stok Barang   : "; cin>>barang[i].stock;
		cin.ignore(1000, '\n');
		cout<<"Input Lokasi Barang : "; cin.getline(barang[i].lokasi, 25);
	}

	// TAMPILKAN DATA SEBELUM DIURUTKAN
	cout<<endl;
	cout<<"\t\t"<<"STOK BARANG ANDA SAAT INI"<<endl;
	for (i=0; i<a; i++) {
		cout<<"\t\t"<<"========================="<<endl;
		cout<<"\t\t"<<"| KODE BARANG  | "<<barang[i].kode<<endl;
		cout<<"\t\t"<<"| NAMA BARANG  | "<<barang[i].nama<<endl;
		cout<<"\t\t"<<"| STOK BARANG  | "<<barang[i].stock<<endl;
		cout<<"\t\t"<<"| LOKASI BARANG| "<<barang[i].lokasi<<endl;
	}
	cout<<"\t\t"<<"========================="<<endl;

	// SORTING (Bubble Sort berdasarkan kode terkecil)
	for (i=0; i<a; i++) {
		for (c=0; c<a-1; c++) {
			if (barang[c].kode > barang[c+1].kode) {
				temp = barang[c];
				barang[c] = barang[c+1];
				barang[c+1] = temp;
			}
		}
	}

	// TAMPILKAN DATA SETELAH DIURUTKAN
	cout<<endl;
	cout<<"\t\t"<<"Setelah data diurutkan berdasarkan kode yang terkecil : "<<endl;
	for (c=0; c<a; c++) {
		cout<<"\t\t"<<"========================="<<endl;
		cout<<"\t\t"<<"| KODE BARANG  | "<<barang[c].kode<<endl;
		cout<<"\t\t"<<"| NAMA BARANG  | "<<barang[c].nama<<endl;
		cout<<"\t\t"<<"| STOK BARANG  | "<<barang[c].stock<<endl;
		cout<<"\t\t"<<"| LOKASI BARANG| "<<barang[c].lokasi<<endl;
	}
	cout<<"\t\t"<<"========================="<<endl;

	// SEARCHING (Sequential Search berdasarkan kode)
	cout<<endl;
	cout<<"\t\t"<<"Masukkan kode barang untuk dicari : ";
	cin>>cari;
	ada = 0;
	for (c=0; c<a; c++) {
		if (barang[c].kode == cari) {
			ada = 1;
			cout<<"\t\t"<<"========================="<<endl;
			cout<<"\t\t"<<"| KODE BARANG  | "<<barang[c].kode<<endl;
			cout<<"\t\t"<<"| NAMA BARANG  | "<<barang[c].nama<<endl;
			cout<<"\t\t"<<"| STOK BARANG  | "<<barang[c].stock<<endl;
			cout<<"\t\t"<<"| LOKASI BARANG| "<<barang[c].lokasi<<endl;
			cout<<"\t\t"<<"========================="<<endl;
		}
	}
	if (ada == 0) {
		cout<<"\t\t"<<"Data Tidak Ditemukan"<<endl;
	}

	// Tahan layar agar tidak langsung menutup
	cin.ignore(1000, '\n');
	cout<<"\nTekan Enter untuk keluar...";
	cin.get();

	return 0;
}
