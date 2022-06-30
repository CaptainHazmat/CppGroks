#include <iostream>
#include <cmath>
using namespace std;

int Quadratic(int a, int b, int c) {
    int x1, x2, D, maxV;

    D = b * b - 4 * a * c;
    if (D > 0)
    {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";

        maxV = (x1 > x2) ? x1 : x2;
        cout << "Greatest value is: " << maxV;
    }
    else if (D == 0)
    {
        x1 = -(b / (2 * a));
        cout << "x1 = x2 = " << x1 << "\n";
        cout << x1 * 2;
    }
    else if (D < 0)
        cout << "ERROR: D < 0" << "\n";
    return 0;
}

int main()
{
    int a, b, c;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;
    Quadratic(a, b, c);
    return 0;
}
