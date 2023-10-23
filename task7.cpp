#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int year;

    cout << "Введите год: ";
    cin >> year;

    if (year % 100 == 0) {
        cout << "Введенный год является вековым." << endl;
    } else {
        cout << "Введенный год не является вековым." << endl;
    }
    
    return 0;
}
