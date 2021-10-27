#include <iostream>
#include <cstdlib>	// contains rand(), srand()
#include <ctime> // to randomize digits (time)
#include <windows.h> // to delay running
using namespace std;

int main()
{
	int dmg;
	cout << "Enemy appears" << endl;
	cout << "Enemy uses Battle axe\n";
	srand(time(NULL));
	dmg = rand() % 20;	// in the range up to 20
	Sleep(1000); // delay (thousandth of a second)
	cout << "Enemy damaged you to -" << dmg << " HP\n";
	return 0;
}
