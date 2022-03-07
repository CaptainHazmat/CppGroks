#include <iostream>
#include <algorithm>  // swap function
using namespace std;

int main()
{
    string word, word2;
    cin >> word;
    cin >> word2;

    cout << word.size() << " ";
    cout << word2.size() << endl;
    
    cout << word + word2 << endl;

    swap(word[0], word2[0]);
    cout << word << " ";
    cout << word2;
    return 0;
}
