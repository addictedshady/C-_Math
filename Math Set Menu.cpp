#include <iostream>
#include <conio.h>
#define MAX 50

using namespace std;

int main()
{
	//Deklarasi menu
	int pilihan;
	//Deklarasi 1
	int a,b,c[MAX],d[MAX],e[MAX],f;
	//deklarasi 2
	int sizea,sizeb,i,x,q,j,k;
	int A[MAX],B[MAX],C[MAX],D[MAX];
	//Intro
	Menu:
	cout << "=====================" << endl;
	cout << "Nama : Farrel Nugroho" << endl;
	cout << "NIM  : 11180930000060" << endl;
	cout << "=====================" << endl;
	cout << endl;
	cout << "Menu Himpunan" << endl;
	cout << "======================-" << endl;
	cout << "1. Irisan 2 Himpunan" << endl;
	cout << "2. Gabungan 2 Himpunan" << endl;
	cout << "3. Himpunan A-B dan B-A" << endl;
	cout << "4. Himpunan A+B" << endl;
	cout << "======================-" << endl;
	cout << "Masukan Pilihan : ";
	cin >> pilihan;
	
	switch(pilihan)
	{
		case 1:
			system("cls");
			judul:
			cout << "===================" << endl;
			cout << "Irisan 2 Himpunan" << endl;
			cout << "===================" << endl;
			for(a=0; a<7; a++)
			{
				cout << "Anggota Himpunan A : ";
				cin >> c[a];
			}
			system ("cls");
			cout << "===================" << endl;
			cout << "Irisan 2 Himpunan" << endl;
			cout << "===================" << endl;
			for(b=0; b<5; b++)
			{
				cout << " Anggota Himpunan B : ";
				cin >> d[b];
			}
			system ("cls");
			cout << "===================" << endl;
			cout << "Irisan 2 Himpunan" << endl;
			cout << "===================" << endl;	
			cout << "Case 1 :" << endl;
			cout << "Himpunan A : {";
			for(a=0; a<7; a++)
			{
				if(a<6)
					cout << c[a] << ",";
				else
					cout << c[a] << "}" << endl;
			}
			cout << "Himpunan B : {";
			for(b=0; b<5; b++)
			{
				if(b<4)
					cout << d[b] << ",";
				else
					cout << d[b] << "}" << endl;
			}
			for(a=0; a<7; a++)
			{
				for(b=0; b<5; b++)
				{
					if (c[a]==d[b]) 
					{
						e[f] = d[b];
						f=f+1;
					}				
				}
			}
			cout << endl;
			cout << "Case 2 :" << endl;
			cout << "A n B adalah : {";
			cout << e[0];
			for (a=1; a<f; a++)
			{
				cout << "," << e[a];
			}	
			cout << "}";
			break;
		
		case 2:
			system("cls");
			cout << "=====================" << endl;
			cout << "Gabungan 2 Himpunan" << endl;
			cout << "=====================" << endl;	
			sizea = 0;
			cout << "Masukan jumlah anggota himpunan A : ";
			cin >> sizea;
			sizeb = 0;
			cout << "Masukan jumlah anggota himpunan B : ";
			cin >> sizeb;
	
			for(i=0; i<sizea; i++)
			{
				cout << "Masukan Anggota A : ";
				cin >> A[i];
			}
			for(i=0; i<sizeb; i++)
			{
				cout << "Masukan Anggota B : ";
				cin >> B[i];
			}
			system ("cls");
			cout << "=====================" << endl;
			cout << "Gabungan 2 Himpunan" << endl;
			cout << "=====================" << endl;
			cout << "Himpunan A : {" << A[0];
			for(i=1; i<sizea; i++)
			{	
				cout << "," << A[i];
			}
			cout << "}" << endl;
			cout << "Himpunan B : {" << B[0];
			for(i=1; i<sizeb; i++)
			{	
				cout << "," << B[i];
			}
			cout << "}" << endl;
			cout << endl;
			cout << "AuB : {" << A[0];
			for(i=1; i<sizea; i++)
			{
				cout << "," << A[i];
			}
			for (x=0; x<sizeb; x++)
			{
				q=0;
				for(i=0; i<sizea; i++)
				{
					if (A[i] == B[x])
					{
						q=1;
					}
				}	
				if(q==0)
				{
					cout << "," << B[x];
				}
			}
			cout << "}";
			break;
		
		case 3:
			system ("cls");
			cout << "=====================" << endl;
			cout << "Himpunan A-B dan B-A" << endl; 
			cout << "=====================" << endl;
			cout << endl;
			sizea = 0;
			cout << "Masukan jumlah anggota himpunan A : ";
			cin >> sizea;
			sizeb = 0;
			cout << "Masukan jumlah anggota himpunan B : ";
			cin >> sizeb;
	
			for(i=0; i<sizea; i++)
			{
				cout << "Masukan Anggota A : ";
				cin >> A[i];
			}
			for(i=0; i<sizeb; i++)
			{
				cout << "Masukan Anggota B : ";
				cin >> B[i];
			}
			system ("cls");
			cout << "=====================" << endl;
			cout << "Himpunan A-B dan B-A" << endl; 
			cout << "=====================" << endl;
			cout << endl;
			cout << "Himpunan A : {" << A[0];
			for(i=1; i<sizea; i++)
			{	
				cout << "," << A[i];
			}
			cout << "}" << endl;
			cout << "Himpunan B : {" << B[0];
			for(i=1; i<sizeb; i++)
			{	
				cout << "," << B[i];
			}
			cout << "}" << endl;
			cout << endl;
		
			for (i=0; i<sizea; i++)
			{
				q=1;
				for(x=0; x<sizeb; x++)
				{
					if (A[i] == B[x])
					{
						q=0;
					}
				}
				if(q==1)
				{
					D[k]=A[i];
					k=k+1;
				}
			}
			cout << "A-B = {" << D[0];
			for (i=1; i<k; i++)
			{
				cout << "," << D[i];
			}
			cout << "}" << endl;
			
			for (x=0; x<sizeb; x++)
			{
				q=1;
				for(i=0; i<sizea; i++)
				{
					if (A[i] == B[x])
					{
						q=0;
					}
				}
				if(q==1)
				{
					C[j]=B[x];
					j=j+1;
				}
			}
			cout << "B-A = {" << C[0];
			for (i=1; i<j; i++)
			{
				cout << "," << C[i];
			}
			cout << "}";
			break;
	
			
	
			
	}
}
