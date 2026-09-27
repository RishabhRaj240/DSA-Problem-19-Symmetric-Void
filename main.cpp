#include<iostream>
using namespace std;

void Pattern19(int n) {
	int iniS = 0;
	for (int i = 0; i < n; i++) {
		// Stars
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}
		// Spaces
		for (int j = 0; j < iniS; j++) {
			cout << " ";
		}
		// Stars
		for (int j = 0; j < n - i; j++) {
			cout << "*";
		}
		iniS += 2;
		cout << endl;
	}

	int iniS2 = 8;
	for (int i = 1; i <= n; i++) {
		// Stars
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		// Spaces
		for (int j = 0; j < iniS2; j++) {
			cout << " ";
		}
		// Stars
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		iniS2 -= 2;
		cout << endl;
	}
}

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		Pattern19(n);
	}
	return 0;
}