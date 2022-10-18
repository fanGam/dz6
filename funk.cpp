#include <iostream>
#include <fstream>

using namespace std;

int Max(int a, int b) {
	if (a > b) return a;
	return b;
}

void TheMassiv7() {
	const int n = 10;
	int *a = new int[n];
	int s = 0;
	int maxel = -10000000;
	int numb = 0;
	cout << "Type massive (1 elem in a row)" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s += abs(*(a + i));
		if (*(a + i) == maxel) {
			numb++;
		}
		else if (*(a + i) > maxel) {
			numb = 1;
			maxel = *(a + i);
		}
	}
	delete[] a;
	cout << "Summ of abs is " << s << " max elem is " << maxel << " and there are " << numb << " of this elements." << endl;
}

void TheMassiv15() {
	const int n = 10;
	int* a = new int[n];
	int minel = -1;
	int Kol = 0;
	cout << "Type massive (1 elem in a row)" << endl;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (*(a + i) == minel) {
			Kol++;
		}
		else if (*(a + i) < minel && *(a + i) > 0) {
			Kol = 1;
			minel = *(a + i);
		}
	}
	delete[] a;
	cout << "min elem is " << minel << " and there are " << Kol << " of this elements." << endl;
}

void TheMassiv27() {
	const int n = 10;
	int* a = new int[n];
	int Kol = 0;
	for (int i = 1; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < n; i++) {
		if (*(a + i - 1) < *(a + i)) {
			cout << *(a + i) << " ";
			Kol++;
		}
	}
	delete[] a;
	cout << endl;
	cout << "There are " << Kol << " of that numbers!" << endl;
}

void TheMassiv37() {
	ifstream f1;
	ofstream f2;
	int a; 
	f1.open("file.txt");
	f2.open("file1.txt");
	if (f1 >> a) {
		const int n = a * 2;
		int* b = new int[n];
		int i = 0;
		while (f1 >> a){
			b[i++] = a;
		}
		for (int j = 0; j < i; j++) {
			if (*(b + j) < 0) {
				for (int k = n; k > j; k--) {
					*(b + k + 1) = *(b + k);
				}
				*(b + j + 1) = 0;
				i++;
			}
		}
		for (int j = 0; j < i; j++) {
			f2 << *(b + j) << " ";
		}
	}
	else {
		cout << "Something went wrong!" << endl;
	}
	f1.close();
	f2.close();
}