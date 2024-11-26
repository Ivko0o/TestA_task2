#include <iostream>
#include <cmath>

using namespace std;

//This program will calculate which prime numbers are 'Twin' Numbers


bool isPrimeNumber(int x);

int main() {

	int n = 0;
	int q = 2;			//These are the first 2 prime numbers
	int p = 3;			//These are the first 2 prime numbers
	int count = 0;


	cout << "This program will show which Prime numbers are 'Twin' numbers - e.g (q + 2 = p)" << endl << endl;
	cout << "Enter a positive number between 1 and 100,000 for number of iterations" << endl;
	cin >> n;
	cout << endl;

	while (n < 1 || n > 100000) {
		cout << "Number has to be between 1 and 100,000" << endl;
		cout << "Try again: ";
		cin >> n;
	}


	while(count < n) {

		if (q + 2 == p) {
			cout << q << " " << p << endl;
			count++;
		}

		int a = p + 1;
		while (!isPrimeNumber(a)) {
			a++;
		}

		q = p;
		p = a;

	}

}

//This will check if the number is prime
bool isPrimeNumber(int x) {
	int count = 0;

	if (x <= 1) {
		return false;
	}
	for (int i = 1; i <= x; i++) {
		if (x % i == 0) {
			count++;
		}
	}

	if (count > 2) {
		return false;
	}

	return true;
}


