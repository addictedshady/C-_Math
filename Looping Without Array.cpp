#include <iostream>
#include <tgmath.h>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
	ofstream file;
	int a,b,c,d;
	int pilihan;
	char ulang;
	system("cls");
	cout << "=====================" << endl;
	cout << "Nama : Farrel Nugroho" << endl;
	cout << "Nim  : 11180930000060" << endl;
	cout << "=====================" << endl;
	cout << "Tugas Looping Tanpa Array + print to notepad" << endl;
	cout << "1. Case Pertama" << endl;
	cout << "2. Case Kedua" << endl;
	cout << "=====================" << endl;
	cout << "Masukan pilihan ";
	cin >> pilihan;
	
	
	switch (pilihan)
	{
	case 1:
	system("cls");
	file.open("Case 1.txt", ios::app);
	cout << "10 Bilangan pangkat pertama" << endl;
	file << "10 Bilangan pangkat pertama" << endl;
	for(a=0; a<10; a++)
		{
		b = pow(2, a);
		cout << b << endl;
		file << b << endl;
		c = c+b;
		}
	cout <<"Hasilnya " << c << endl;
	file <<"Hasilnya " << c << endl;
	file.close();
	cout << "Kembali ke menu? (y/n)" << endl;
	cin >> ulang;
			if (ulang == 'y')
				return main();
			else 
				return 0;
				
	case 2:
	system("cls");
	file.open("Case 2.txt", ios::app);
	b=5;
	cout << b << " ";
	file << b << " ";
	for(a=3;a<=21;a+=2)
		{
		c=b+a;
		b=c;
		d=d+c;
		cout << c << " ";
		}
	cout << "Hasilnya " << d << endl;
	file << "Hasilnya " << d << endl;
	file.close();
	getch();
	}
}
