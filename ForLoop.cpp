#include<iostream>
#include<string>

using namespace std;

int main() {
	int a, b, n;
	cin >> a;
	cin >> b;
	n = a--;
	const int size = 10;
	string ar[size] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	for (n = a; n < b; n++)
	{
		if (n >= 9) {
			if (n % 2 == 0) {
				cout << "odd" << endl;
			}
			else {
				cout << "even" << endl;
			}
		}
		else {
			cout << ar[n] << endl;
		}
	}
	return 0;
}
