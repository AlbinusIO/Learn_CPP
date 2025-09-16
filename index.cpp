#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "ukuran";
	cin >> size;
	int i = 0;
	do {
		int j = 0;
		do {
			cout << "* ";
			j++;
		} while (j < size);
		cout << endl;
		i++;
		
		//if (i >= size) {
			//break;
	}while (true);
	return 0;
}