#include<iostream>
using namespace std;

void runMath(double *pres) {
    double z, b, a, betta;
    cout << "Z = ";
    cin >> z;
    cout << "B = ";
    cin >> b;
    cout << "A = ";
    cin >> a;
    cout << "Betta = ";
    cin >> betta;
    *pres = pow(z, 3) - b + pow(a, 2) / pow(tan(betta), 2);
}

int main()
{
    double size;
    double n = 0;
    double res = 0;
    cout << "Type quantity of X: ";
    cin >> size;
    int *x = new int[size];
    for (double i = 0; i < size; i++) {
        double j = i;
        cout << "Type value of Z, B, A, for X" << ++j << ": " << endl;
        runMath(&res);
        n += res;
    }
    cout << n;
    

    
    delete[] x;
    return 0;
}
