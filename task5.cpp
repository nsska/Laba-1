#include<iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int number;
    
    cout << "Введите число: ";
    cin >> number;
    
    if (number % 3 == 0 && number % 5 == 0) {
        cout << "Число " << number << " является кратным 3 и 5 одновременно." << endl;
    } else {
        cout << "Число " << number << " не является кратным 3 и 5 одновременно." << endl;
    }
    
    return 0;
}
