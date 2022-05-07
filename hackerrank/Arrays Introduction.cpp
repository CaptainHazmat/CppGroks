#include <iostream>
using namespace std;


int main()
{
    int size;
    cout << "Enter the number of size for array: ";
    cin >> size;
    int* arr= new int[size];
    for (int i = 0; i < size; i++) {
        int arrnum = i;
        cout << ++arrnum << ": ";
        cin >> arr[i];
    }
    for (int j = --size; j >= 0; j--) {
        cout << arr[j];
    }
    delete[] arr;
    return 0;
}
