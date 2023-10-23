#include<iostream>

using namespace std;
bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int main()
{
    setlocale(0, "");
    int year;
    cout << "Введите год: ";
    cin >> year;

    if (isLeapYear(year)) {
        cout << year << " - високосный год" << endl;
    } else {
        cout << year << " - не високосный год" << endl;
    }
    
    return 0;
}
