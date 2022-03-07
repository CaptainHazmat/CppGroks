#include<iostream>
using namespace std;

void update(int* a, int* b) {
    int sum, sum2;
    sum = *a + *b;
    sum2 = (*a - *b) > 0 ? (*a - *b) : -(*a - *b);
    *a = sum;
    *b = sum2;
}

int main() {
    int a, b;
    int* pa = &a, * pb = &b;

    cin >> a >> b;
    update(pa, pb);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
