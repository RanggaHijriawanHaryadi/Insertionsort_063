#include <iostream>
using namespace std;

int arr[20];
int n;


void input() {
	while (true)
	{
		cout << "masukkan jumlah data pada array : ";
		cin >> n;

		if (n <= 20) {
			break;

		}

		else
		{
			cout << "\Array yang anda masukkan maksimal 20 elemen,\n";
		}
	}
	cout << endl;
	cout << "=======================" << endl;
	cout << "Masukan Element Array  " << endl;
	cout << "=======================" << endl;
