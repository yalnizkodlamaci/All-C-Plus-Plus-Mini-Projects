#include <iostream>
using namespace std;

int main() {

    struct Araba {
        string Model;
        string Marka;
        int Yıl;

        void Yazdır() {
            cout << "Model: " << Model << "\n";
            cout << "Marka: " << Marka << "\n";
            cout << "Yıl: " << Yıl << "\n";
        }
    }; // <-- unutma noktalı virgül

    Araba araba1;
    Araba araba2;

    araba2.Model = "Demon";
    araba2.Marka = "Dodge";
    araba2.Yıl = 2018;

    araba1.Model = "BMW";
    araba1.Marka = "X5";
    araba1.Yıl = 2018;

    araba2.Yazdır();
    cout << "\n"; // araya boşluk
    araba1.Yazdır();

    return 0;
}
