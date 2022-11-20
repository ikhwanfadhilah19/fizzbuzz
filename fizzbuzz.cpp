#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Masukkan Angka : ";
    cin >> num;

    if (num > 100) {
        cout << "Out Of Range" << endl;
    } else if (num % 3 == 0 && num % 5 == 0) {
        cout << "Fizz Buzz" << endl;
    } else if (num % 3 == 0) {
        cout << "Fizz" << endl;
    } else if (num % 5 == 0) {
        cout << "Buzz" << endl;
    } else {
        cout << num;
    }

    return 0;
}
