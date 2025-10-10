#include <iostream>
using namespace std;

// İnsan sınıfı öne bildirim
class İnsan; 

// Canavar sınıfı tek blokta, fonksiyon tanımı sınıf içinde
class Canavar {
public:
    int Can;
    string Isim;

    void Saldir(İnsan &insan, int verilenHasar) {
        insan.Can -= verilenHasar;
        cout << Isim << " " << verilenHasar << " hasar verdi.\n";
        cout << insan.Isim << "'nin " << insan.Can << " cani kaldi.\n";
        if (insan.Can <= 0) {
            cout << insan.Isim << " oldü.\n";
        }
    }
};

// İnsan sınıfı
class İnsan {
public:
    int Can;
    string Isim;

    void Saldir(Canavar &canavar, int verilenHasar) {
        canavar.Can -= verilenHasar;
        cout << Isim << " " << verilenHasar << " hasar verdi.\n";
        cout << canavar.Isim << "'nin " << canavar.Can << " cani kaldi.\n";
        if (canavar.Can <= 0) {
            cout << canavar.Isim << " oldü.\n";
        }
    }
};

int main() {
    Canavar zombi;
    zombi.Can = 100;
    zombi.Isim = "Zombi";

    İnsan cebi;
    cebi.Can = 120;
    cebi.Isim = "Cebi";

    cout << "Canavar : " << zombi.Isim << "\n";
    cout << "Can     : " << zombi.Can << "\n\n";
    cout << "Insan   : " << cebi.Isim << "\n";
    cout << "Can     : " << cebi.Can << "\n\n";

    // Karşılıklı saldırılar
    cebi.Saldir(zombi, 50);
    zombi.Saldir(cebi, 1000);

    return 0;
}
