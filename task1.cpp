#include<iostream>

using namespace std;
bool isPrime(int n)
{
    for(int i = 2; i <= n/2; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    setlocale(0, "");
    int number;
    cout << "Введите число: ";
    cin >> number;
    
    if (isPrime(number)) {
    cout << number << " - простое число." << endl;
    } else {
    cout << number << " - не является простым числом." << endl;
    }
    
    return 0;
}
