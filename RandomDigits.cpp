#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int main()
{
	int a = 0;
	cout << "Enemy appears" << endl;
	cout << "Enemy uses Battle axe\n";
	srand(time(NULL));
	a = rand() % 20;
	cout << "Enemy damaged you to -" << a << " HP\n";
	return 0;
}