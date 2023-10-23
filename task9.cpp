#include<iostream>

using namespace std;
bool isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum == number;
}

int main()
{
    setlocale(0, "");
    int number;
    cout << "Введите число: ";
    cin >> number;

    if (isPerfectNumber(number)) {
        cout << number << " является совершенным числом." << endl;
    } else {
        cout << number << " не является совершенным числом." << endl;
    }
    
    return 0;
}
