#include <iostream>


using namespace std;


int main()

{
	int arr[10],i,min,;
	cout << "Masukan 5 angka" << endl;
	for(i=0; i<=5; i++)
	{
		cout << "Array " << "[" << i << "] ";
		cin >> arr[i];
	}

	min = arr[0];	
	for(i=t; i<=5; i++)
	{
	 	if (min > arr[i])
	 	 	min = arr[i];
	}
	cout << "Nilai minimum yang di input " << min;
}
