#include <iostream>
#include <cstdlib>	// contains rand(), srand()
#include <windows.h> // to delay running Sleep()
using namespace std;

bool Result(int num, int randn) {
	bool ans;
	ans = (num == randn ? true : false);
	return ans;
}

int main()
{
	srand(time(NULL));
	int randn = rand() % 10;
	int num = 5;
	bool res;
	cout << "IF YOUR NUM = " << randn << " :\nYour num : ";
	cin >> num;
	res = Result(num, randn);
	Sleep(1000);
	if (res == true) {
		cout << "Your num is equal to " << randn;
	}
	else {
		cout << "Your num is not equal to " << randn;
	}
}
