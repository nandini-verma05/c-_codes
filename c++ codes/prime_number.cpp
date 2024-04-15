#include <iostream>
using namespace std;

int main() {
    for (int num = 1; num <= 500; num++) {
        bool isPrime = true;

        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}
