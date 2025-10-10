#include <iostream>
#include <cstdlib> // system() için
using namespace std;

int main() {
    string isimData;
    int yasData;
    string isim;
    int yas;

    // Üyelik
    cout << "Isminizi Belirleyin: ";
    cin >> isimData;

    if (isimData.empty()) {
        cout << "Isim bos girilemez." << endl;
        return 0;
    }

    cout << "Yasinizi Belirleyin: ";
    cin >> yasData;

    system("cls"); // ekranı temizle, üyelik bilgisi silinsin

    // Giriş
    cout << "Isminiz: ";
    cin >> isim;

    cout << "Yasiniz: ";
    cin >> yas;

    system("cls"); // giriş ekranını temizle

    // Datayla Karşılaştırma
    if (isimData == isim && yasData == yas) {
        cout << "Kisi basariyla giris yapti." << endl;
    } else {
        cout << "Sisteme giris yapilmadi." << endl;
        return 0;
    }

    // Oy Verme Sistemi
    int secimekrani;
    int secim;

    cout << "Oy vermek icin 1'e bas" << endl;
    cout << "Cikis icin 0'a bas" << endl;
    cin >> secimekrani;

    system("cls"); // seçim yapıldıktan sonra ekranı temizle

    if (secimekrani == 1 && yas >= 18) {
        cout << "Oy ekrani\n\n";
        cout << "Oy verilecek kisiler:\n";
        cout << "1 - Izbonun Vantilatoru\n";
        cout << "2 - Cebinin Findigi\n";
        cout << "3 - Zurna Durum\n";
        cin >> secim;

        system("cls"); // oy seçimi yapıldıktan sonra ekranı temizle

        if (secim == 1) cout << "Izbonun Vantilatorune oy verdiniz." << endl;
        if (secim == 2) cout << "Cebinin Findigina oy verdiniz." << endl;
        if (secim == 3) cout << "Zurna Durume oy verdiniz." << endl;
    }
    else if (secimekrani == 1 && yas < 18) {
        cout << "Oy kullanamazsin." << endl;
    }

    return 0;
}