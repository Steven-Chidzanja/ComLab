#include <iostream>

using namespace std;

int main()
{
    int* pPointer = nullptr;

    int numberArray[3] = {10, 20, 30};

    pPointer = numberArray;

    cout << "Address at pPointer: " << pPointer << endl;
    cout << "Address at numberArray[0]: " << numberArray << endl;
    cout << "The Value at pPointer: " << *pPointer << endl;
    cout << "The Value at ++pPointer: " << *(++pPointer) << endl;
    cout << "The Value at pPointer++: " << *(pPointer++) << endl;
    return 0;
}
