#include <iostream>
#include <conio.h>
#include <string>
#include <fstream>

using namespace std;

	ofstream file;
	

void perkenalan()
{
	cout << " ===================================" << endl;	
	cout << "	Nama : Farrel Nugroho" << endl;
	cout << "	NIM  : 11180930000060" << endl;
	cout << " ===================================" << endl;	
	cout << "	STRUK GAJI PT SEJAHTERA" << endl;
	cout << "\n\n";
}

void menuStatus()
{
	cout << "1. Single" << endl;
	cout << "2. Menikah" << endl;
	cout << "3. Duda/Janda" << endl;
	
}

void endStatus(int *stat)
{
	if (*stat == 1)
	{
	cout << "	Status      : Single" << endl;
	file << "	Status      : Single" << endl;
	}
	if (*stat == 2)
	{
	cout << "	Status      : Menikah" << endl;
	file << "	Status      : Menikah" << endl;
	}
	if (*stat == 3)
	{
	cout << "	Status      : Duda/Janda" << endl;
	file << "	Status      : Duda/Janda" << endl;
	}
}
void Single(int *gol)
{

	int gp1,gp2,gp3,gpf;
	if(*gol==1)
	{
		gp1=5000000;	
		gpf=gp1;
	}
	else if(*gol==2)
	{
		gp2=7000000;
		gpf=gp2;
	}
	else if(*gol==3)
	{
		gp3=10000000;
		gpf=gp3;
	}
	cout << "	Gaji Pokok  : " << gpf << endl;
	cout << "	Jumlah Anak : -"  << endl;
	cout << "	Gaji Bersih : " << gpf <<endl;
	file << "	Gaji Pokok  : " << gpf << endl;
	file << "	Jumlah Anak : -"  << endl;
	file << "	Gaji Bersih : " << gpf <<endl;
}

void Menikah(int *gol, int*an)
{
	int gp1,gp2,gp3,gpfa,gpf,gpa;
	// Golongan
	if(*gol==1)
	{
		gp1=5000000;
		gpf=gp1;
	}
	else if(*gol==2)
	{
		gp2=7000000;
		gpf=gp2;
	}
	else if(*gol==3)
	{
		gp3=10000000;
		gpf=gp3;
	}
	cout << "	Gaji Pokok  : " << gpf << endl;
		file << "	Gaji Pokok  : " << gpf << endl;
	gpa = gpf + (gpf*0.10);
	//Anak
	cout << "	Jumlah Anak : " << *an << endl;
		file << "	Jumlah Anak : " << *an << endl;
	if(*an==1)
	{
		gpfa = gpa + (gpf*0.05);
	}
	else if(*an==2)
	{
		gpfa = gpa + (gpf*0.05) + (gpf*0.025);
	}
	else if(*an==3  || *an >3)
	{
		gpfa = gpa + (gpf*0.05) + (gpf*0.025) + (gpf*0.01);
	}
	else if(*an == 0)
	{
		gpfa=gpa;
	}
	cout << "	Gaji Bersih : " << gpfa << endl;
		file << "	Gaji Bersih : " << gpfa << endl;
}

void dj(int *gol, int*an)
{
	int gp1,gp2,gp3,gpfa,gpf;
	// Golongan
	if(*gol==1)
	{
		gp1=5000000;
		gpf=gp1;
	}
	else if(*gol==2)
	{
		gp2=7000000;
		gpf=gp2;
	}
	else if(*gol==3)
	{
		gp3=10000000;
		gpf=gp3;
	}
	cout << "	Gaji Pokok  : " << gpf << endl;
		file << "	Gaji Pokok  : " << gpf << endl;
	//Anak
	cout << "	Jumlah Anak : " << *an << endl;
		file << "	Jumlah Anak : " << *an << endl;
	if(*an==1)
	{
		gpfa = gpf + (gpf*0.05);
	}
	else if(*an==2)
	{
		gpfa = gpf + (gpf*0.05) + (gpf*0.025);
	}
	else if(*an==3  || *an >3)
	{
		gpfa = gpf + (gpf*0.05) + (gpf*0.025) + (gpf*0.01);
	}
	else if(*an == 0)
	{
		gpfa=gpf;
	}
	cout << "	Gaji Bersih : " << gpfa << endl;
		file << "	Gaji Bersih : " << gpfa << endl;
}

int main ()
{
	file.open("Struk Gaji.txt", ios::app);
	int status,golm,anak;
	string nama;
	char ulang;
	
	int n =0;
	int no[100];
	
	//Pemilik
	perkenalan();
	
	Ulang:
	cout << "Masukan Nama Lengkap : ";
	getline(cin,nama);
	menuStatus();
	cout << "Status : ";
	cin >> status;
	cout << "Jumlah Anak (isi 0 apabila Single) = ";
	cin >> anak;
	cout << "Golongan : ";
	cin >> golm;
	
	//Struk
	cout << "\n\n";
	cout << "  ========================================" << endl;
	file << "  ========================================" << endl;
	cout << "  ===========STRUK GAJI===================" << endl;
	file << "  ===========STRUK GAJI===================" << endl;
	cout << "	No 	    : " << n+1 << endl;
	file << "	No      : " << n+1 << endl;
			no[n++]=n;
	cout << "	Nama        : " << nama << endl;
	file << "	Nama        : " << nama << endl;
	endStatus(&status);
	cout << "	Golongan    : " << golm << endl;
	file << "	Golongan    : " << golm << endl;
	
	//status checker
	if(status==1)
	{
		Single(&golm);
	}
	if(status==2)
	{
		Menikah(&golm,&anak);
	}
	if(status==3)
	{
		dj(&golm,&anak);
	}
	cout << "  ========================================" << endl;
	file << "  ========================================" << endl;
	cout << "\n\n";
	
	//repeat
	cout << "Input Ulang : ";
	cin >> ulang;
	if(!( ulang != 'Y' && ulang != 'y'))
	{
	cin.ignore();
	goto Ulang;
	}
	else
	{ 
	return 0;
	file.close();
	}	
	getch();
}
