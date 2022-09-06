#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	cout << "===========================" << endl;
	cout << "Nama : Farrel Nugroho" << endl;
	cout << "NIM  : 11180930000060" << endl;
	cout << "===========================" << endl; 
	cout << endl;
	cout << "Program himpunan dan menghitung irisan dari kedua himpunan" << endl;
	cout << endl;
	
	int a,b,c[10],d[10],e[10],f;
	
	for(a=0; a<7; a++)
	{
		cout << "Anggota Himpunan A : ";
		cin >> c[a];
	}
	system ("cls");
	
	for(b=0; b<5; b++)
	{
		cout << " Anggota Himpunan B : ";
		cin >> d[b];
	}
	system ("cls");	
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
	
getch();
}
