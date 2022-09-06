#include <iostream>
#include <conio.h>
#define max 50

using namespace std;

int main()
{
	int ang,n,i,j,arr[max];
	
	cout << "================" << endl;
	cout << "Farrel Nugroho" << endl;
	cout << "11180930000060" << endl;
	cout << "================" << endl;
	cout << "INSERTION SORT" << endl;
	cout << "\n\n";
	cout << "Masukan banyak Array : ";
	cin >> n;
	
	for (int i=0; i<n; ++i)
	{
		cout << "Masukan Anggka " << i << ": ";
		cin >> arr[i];
	}
	cout << "Angka Belum terurut : ";
	for (int i=0; i<n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for(int i=1; i<n; ++i)
	{
		ang=arr[i];
		j=i-1;
		
		while(j>=0 && arr[j]>ang)
		{
			arr[j+1]=arr[j];
			j=j-1;
			
		}
		arr[j+1]=ang;
	}
	
	cout << "Angka sudah terurut : ";
	for (int i=0; i<n; ++i)
	{
		cout << arr[i] << " ";
	}
	
	getch();
}

