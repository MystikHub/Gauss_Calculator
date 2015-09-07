#include <iostream>

using namespace std;

int gaussNumber(int current_number, int index, int last_number)
{
    while(index < last_number)
    {
        index++;
        current_number += index;
    }
    return current_number;
}

int main()
{
    cout << "Enter your starting number: ";
    int firstNumber = 0;
    cin >> firstNumber;

    cout << "Enter your last number: ";
    int lastNumber = 0;
    cin >> lastNumber;

    cout << gaussNumber(firstNumber, firstNumber, lastNumber);

    cin.get();
    cin.ignore();

    return 0;
}
