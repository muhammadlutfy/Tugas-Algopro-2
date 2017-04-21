#include <iostream>
#include <stdlib.h>
using namespace std;

//Prototype
void Pcetak();
int Pbiaya();
int Ptujuan();
int Pberangkat();

	typedef struct {
		string noKA;
		string namaKA;
	} kereta;

		typedef struct {
			string nama[10];
			string ktp[10];
		}	penumpang;

			typedef struct {
				int jam;
				int menit;
				int detik;
			} jam;

				typedef struct {
					string hari;
					string bulan;
					int tahun;
				} tanggal;

					typedef struct {
						string kotaAsalKA;
						string kotatujuanKA;
						jam waktuBerangkat;
						jam waktuTiba;
						tanggal tanggalBerangkat;
						tanggal tanggalTiba;
						int harga;
					} jadwalKA;
//Variable Global
	int n; //Jumlah Penumpang Dalam Satu Tiket
	penumpang user;
	kereta KA;
	jadwalKA tiket;

int main (){
	KA.noKA = "BDO-Cipress-14021";
	KA.namaKA = "Ciremai_Express";
	tiket.tanggalBerangkat.hari = "Senin, 17";
	tiket.tanggalBerangkat.bulan = " April ";
	tiket.tanggalBerangkat.tahun = 2017;
	tiket.tanggalTiba.hari=tiket.tanggalBerangkat.hari;
	tiket.tanggalTiba.bulan=tiket.tanggalBerangkat.bulan;
	tiket.tanggalTiba.tahun=tiket.tanggalBerangkat.tahun;
	system("CLS");
	cout << "=========================================="<<endl;
	cout << "Selamat Datang di Aplikasi Pemesanan Tiket"<<endl;
	cout << "          Kereta Ciremai Express          "<<endl;
	cout << "=========================================="<<endl;
	cout << tiket.tanggalBerangkat.hari << tiket.tanggalBerangkat.bulan << tiket.tanggalBerangkat.tahun << endl<<endl;
	Pberangkat();
	Ptujuan();
		cout << "Jumlah tiket yang di beli : "; cin >> n ;
		for (int i=1;i<=n;i++) {
			cout <<endl<< "Masukan Nama   : "; cin >> user.nama[i] ;
			cout << "Masukan No KTP : "; cin >> user.ktp[i];
		}
	Pcetak();
	 return 0;
}

//Proses Tampil
void Pcetak(){
	system("CLS");
	cout << "================ DATA PERJALANAN ================" << endl;
	cout << "-------------------------------------------------" << endl;

	cout << "No Kereta Api     : " << KA.noKA << endl;
	cout << "Nama Kereta Api   : " << KA.namaKA << endl << endl;
	//Ulangan Penumpang
	cout << "Nama Penumpang    : " << endl;
	for (int x=1;x<=n;x++){
		cout << x << ". Nama    : " << user.nama[x]<< endl;
		cout <<			"   No. KTP : " << user.ktp[x] << endl;
	}

	cout << endl;
	cout << "Tujuan            : " << tiket.kotatujuanKA << endl;
	cout << "Asal              : " << tiket.kotaAsalKA << endl << endl;

	cout << "Tanggal Berangkat : " << tiket.tanggalBerangkat.hari << tiket.tanggalBerangkat.bulan << tiket.tanggalBerangkat.tahun << endl;
	cout << "Waktu             : " << tiket.waktuBerangkat.jam <<":0"<< tiket.waktuBerangkat.menit <<":0"<< tiket.waktuBerangkat.detik << endl<<endl;

	cout << "Tanggal Tiba      : " << tiket.tanggalTiba.hari << tiket.tanggalTiba.bulan << tiket.tanggalTiba.tahun << endl;
	cout << "Waktu             : " << tiket.waktuTiba.jam <<":"<< tiket.waktuTiba.menit <<":"<< tiket.waktuTiba.detik << endl<<endl;

	cout << "Biaya             : Rp." << tiket.harga << ".000 /orang" << endl;
	Pbiaya();
	cout << "Total             : Rp." << tiket.harga << ".000" << endl << endl;
}

	int Pbiaya(){
		tiket.harga=tiket.harga*n;
		return tiket.harga;
	}
		//Proses Pemilihan Tujuan dan Pembuka
		int Ptujuan(){
			int pilihan ;// variable local
			pilihtujuan:

			cout <<endl<< "Tujuan yang tersedia hari ini.\n";
			cout << "1. Bandung - Cirebon\n";
			cout << "2. Bandung - Yogyakarta\n";
			cout << "3. Bandung - Jakarta\n";
			cout << "Silahkan pilih tujuan anda : "; cin >> pilihan;

			switch (pilihan) {
				case 1:
					tiket.harga=95;
					tiket.kotatujuanKA="Bandung";
					tiket.kotaAsalKA="Cirebon";
					tiket.waktuTiba.jam=tiket.waktuBerangkat.jam+4;
					tiket.waktuTiba.menit=tiket.waktuBerangkat.menit+28;
					tiket.waktuTiba.detik=tiket.waktuBerangkat.detik+55;
					break;
				case 2:
					tiket.harga=135;
					tiket.kotatujuanKA="Bandung";
					tiket.kotaAsalKA="Yogyakarta";
					tiket.waktuTiba.jam=tiket.waktuBerangkat.jam+7;
					tiket.waktuTiba.menit=tiket.waktuBerangkat.menit+45;
					tiket.waktuTiba.detik=tiket.waktuBerangkat.detik+32;
					break;
				case 3:
					tiket.harga=115;
					tiket.kotatujuanKA="Bandung";
					tiket.kotaAsalKA="Jakarta";
					tiket.waktuTiba.jam=tiket.waktuBerangkat.jam+3;
					tiket.waktuTiba.menit=tiket.waktuBerangkat.menit+59;
					tiket.waktuTiba.detik=tiket.waktuBerangkat.detik+17;
					break;
				default:
					cout << "Pilihan anda tidak valid \n";
					cout << "Tolong masukan pilihan 1 - 3\n"<<endl;
					goto pilihtujuan;
					break;
			}
			return tiket.harga;
		}

		Pberangkat() {
			int waktu;
			pilihwaktu:
			cout << "Tentukan Waktu Keberangkatan Anda! \n";
			cout << "1. 08:00 WIB\n";
			cout << "2. 13:00 WIB\n";
			cout << "3. 19:00 WIB\n";
			cout << "Silahkan pilih waktu yang anda inginkan : "; cin >> waktu;

			if (waktu==1) {
				tiket.waktuBerangkat.jam=8;
				tiket.waktuBerangkat.menit=00;
				tiket.waktuBerangkat.detik=00;
			}
				else if (waktu==2) {
					tiket.waktuBerangkat.jam=13;
					tiket.waktuBerangkat.menit=00;
					tiket.waktuBerangkat.detik=00;
				}
					else if (waktu==3) {
						tiket.waktuBerangkat.jam=19;
						tiket.waktuBerangkat.menit=00;
						tiket.waktuBerangkat.detik=00;
					}
						else {
							cout << "Pilihan anda tidak valid. \n"<<endl;
							goto pilihwaktu;
						}
		}
