#include <iostream>
using namespace std;

//array of integres to hold values
int arr[20];
int cmp_count = 0; // number of comparasion
int moc_count = 0; // number of movement
int n;
void input() {
	while (true)
	{
		cout << "masukan panjang element array :";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\n Maksimum panjang array adalah 20" << endl;

	}

	cout << "\n--------------------" << endl;
	cout << "\nEnter array element" << endl;
	cout << "\n--------------------" << endl;

}