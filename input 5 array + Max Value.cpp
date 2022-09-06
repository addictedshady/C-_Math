#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
	int Array[5];
	int A;
	int max=0;
	
	cout << "Masukan 5 angka" << endl;
	
	for(A=0; A<=5; A++)
	{
		cout << "Array " << "[" << A << "] ";
		cin >> Array[A];
	}
	
	for(A=0; A<=5; A++)
	{
		if(max<Array[A])
		max=Array[A];	
	}
	cout << "Nilai maksimum yang di input " << max;

getch();	
}
