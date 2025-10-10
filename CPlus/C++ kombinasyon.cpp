#include <iostream>
using namespace std;

int sum(int k) {
    if (k > 0) {
        return k + sum(k - 1);
    } else {
        return 0;
    }
}

long double carpma(long double a) {
    if (a > 1) {
        return a * carpma(a - 1);
    } else {
        return 1;
    }
}

int main() {
    long double kombinasyon1 = carpma(1000) / carpma(576);
    cout << kombinasyon1;
    return 0;
}a
