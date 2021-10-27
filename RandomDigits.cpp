#include <iostream>
#include <cstdlib>	// contains rand(), srand()
#include <ctime> // to randomize digits (time)
using namespace std;

int main()
{
	int a = 0;
	cout << "Enemy appears" << endl;
	cout << "Enemy uses Battle axe\n";
	srand(time(NULL));
	a = rand() % 20;	// in the range up to 20
	cout << "Enemy damaged you to -" << a << " HP\n";
	return 0;
}
