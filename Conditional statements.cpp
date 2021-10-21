#include<iostream>
#include<string>

using namespace std;

int main() {
	int n;
	cin >> n;
	const int size = 10;
	string ar[size] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	if (n <= 9) {
		cout << ar[--n] << endl;
	}
	else {
		cout << "Greater than 9" << endl;
	}
	return 0;
}