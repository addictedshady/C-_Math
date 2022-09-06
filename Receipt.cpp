#include <iostream>
#include <conio.h>

using namespace std;

void Pilihan()
{
	cout << "JENIS BARANG : 1. X1 " << endl;
	cout << "               2. X2" << endl;
	cout << "               3. X3" << endl;	
}

void perkenalan()
{
	cout << "\n";
	cout << "Nama : Farrel Nugroho" << endl;
	cout << "NIM  : 11180930000060" << endl;
	cout << "\n\n";
	
}
int main()
{
	const int def1 = 1000;
	const int def2 = 5000;
	const int def3 = 7000;
	
	int jumlaha,jumlahb,jumlahc,jenisb;
	int jumlahaf=0,jumlahbf=0,jumlahcf=0;
	int jumtota=0,jumtotb=0,jumtotc=0;
	int total,jumb;
	char pilihan;
	
	perkenalan();
	ulang:
	Pilihan();
	cout << "\n";
	cout << "Masukan Jenis Barang : ";
	cin >> jenisb;
	
	if(jenisb == 1)
	{
		cout << "Masukan Jumlah : ";
		cin >> jumlaha;
		jumtota+=jumlaha;
		jumlahaf+=jumlaha*1000;	
	}
	else if(jenisb == 2)
	{
		cout << "Masukan Jumlah : ";
		cin >> jumlahb;
		jumtotb+=jumlahb;
		jumlahbf+=jumlahb*5000;	
	}
	else if(jenisb == 3)
	{
		cout << "Masukan Jumlah : ";
		cin >> jumlahc;
		jumtotc+=jumlahc;
		jumlahcf+=jumlahc*7000;	
	}


	cout << "Input ulang? (y/n)";
	cin >> pilihan;
	if(pilihan == 'y' || pilihan == 'Y')
	goto ulang;
	else
	cout << "\n\n";
	total=jumlahaf+jumlahbf+jumlahcf;
	jumb=jumtota+jumtotb+jumtotc;
	system("cls");
	perkenalan();
	cout << "======================STRUK PT XYZ=========================" << endl;
	cout << "|Jenis Barang |" << " Jumlah |" << " Harga Satuan |" << " Total |" << endl;
	//x1
	cout << "  X1             " << jumtota << " 	 " << def1 << "          " << jumlahaf << endl;
	cout << "  X2             " << jumtotb << " 	 " << def2 << "          " << jumlahbf << endl;
	cout << "  X3             " << jumtotc << " 	 " << def3 << "          " << jumlahcf << endl;
	cout << "===========================================================" << endl;
	cout << "Grand Total :    " << jumb << "                     "<< total;
	
	
	
	getch();
	
}
