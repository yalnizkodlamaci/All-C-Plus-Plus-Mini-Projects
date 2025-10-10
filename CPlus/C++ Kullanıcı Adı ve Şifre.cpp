#include <iostream>
using namespace std;

int main() {
    string kullaniciAdiData;
    string sifreData;
    string kullaniciAdi;
    string sifre;

    // Üye kaydı
    cout << "Kullanici Adi Belirle: ";
    cin >> kullaniciAdiData;

    cout << "Sifre Belirle: ";
    cin >> sifreData;

    cout << "\nSisteme Uye Oldunuz. Lobiye aktariliyorsunuz...\n\n";

    // Giriş ekranı
    cout << "Kullanici Adi: ";
    cin >> kullaniciAdi;

    // Kullanici adi uzunluk kontrolü
    if (kullaniciAdi.empty()) {
        cout << "Kullanici adi bos olamaz!" << endl;
        return 0;
    }
    if (kullaniciAdi.length() < 8) {
        cout << "Kullanici adi en az 8 karakter olmali!" << endl;
        return 0;
    }

    cout << "Sifre: ";
    cin >> sifre;

    // Sifre kontrolü
    if (sifre.empty()) {
        cout << "Sifre bos olamaz!" << endl;
        return 0;
    }

    // Kullanici adi ve sifre dogrulama
    if (kullaniciAdi == kullaniciAdiData && sifre == sifreData) {
        cout << "Sisteme Giris Yapildi. Hosgeldiniz!";
    } else {
        cout << "Sisteme Giris Yapilamadi. Kullanici adi veya sifre hatali!";
    }

    return 0;
}
