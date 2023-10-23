#include<iostream>

using namespace std;
bool isPowerOfTwo(int number) {
    if (number <= 0) {
        return false;
    }

    return ((number & (number - 1)) == 0);
}

int main()
{
    setlocale(0, "");
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << "Введенное число является степенью двойки." << endl;
    } else {
        cout << "Введенное число не является степенью двойки." << endl;
    }
    
    return 0;
}
