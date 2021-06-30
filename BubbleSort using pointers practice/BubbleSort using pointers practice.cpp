// This is a practice program for bubble sort using pointers

#include <iostream>
#include <string>

using namespace std;

// Swap two strings
void swapStr(string* s1, string* s2) {
    string tmp = *s1;
    *s1 = *s2; //swapping the "content" instead of the "pointer"
    *s2 = tmp;
}

// Bubble sort for an array of string
void bubsort(string* strs, int numStrs) {
    int numSwaps = 1;
    for (int i = 0; i < numStrs - 1 && 0 < numSwaps; ++i) {
        numSwaps = 0;
        for (int j = 0; j < numStrs - i - 1; ++j)
            if (*(strs + j) > * (strs + 1 + j)) {
                swapStr(strs + j, strs + 1 + j);
                ++numSwaps;
            }
    }
}

int main()
{
    string peoples[] = { "Ohlone", "Miwok", "Cahto", "Hupa" };
    bubsort(peoples, 4);
    cout << "In increasing order:" << endl;
    // Using auto here does work, though
    // this is more for the sake of experimentation
    for (auto iter = 0; iter < 4; ++iter)
        cout << peoples[iter] << endl;

    return 0;
}