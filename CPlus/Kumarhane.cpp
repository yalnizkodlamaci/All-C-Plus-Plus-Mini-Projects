// Kumarhane Uygulaması
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int menusecim;
    int bantsecim;
    int Dolar = 10;
    int YatirilanDolar;

    cout << "1. Çebinin Findiği\n\n";
    cin >> menusecim;

    if (menusecim == 1) {
        cout << "Çebinin Fındık Oyununa hoş geldiniz. Bu oyunun kuralları oldukça basittir.\n";
        cout << "Oyunda 8 kirmizi, 7 mavi ve 1 yesil olmak uzere toplam 16 bant vardir.\n";
        cout << "Amaciniz, findigi kirmizi, mavi veya yesil bantlardan birine atarak dogru tahmini yapmaktir.\n\n";

        cout << "Oyuna baslarken cebinizde 10 dolar bulunur.\n";
        cout << "Eger kirmiziya bahis yapar ve kazanirsaniz paranizin 0.2x katini kazanirsiniz.\n";
        cout << "Maviye bahis yapip kazanirsaniz paranizin 1.5x katini alirsiniz.\n";
        cout << "Yesile bahis yapip kazanmaniz durumunda ise paranizin 20x katini kazanirsiniz.\n\n";

        cout << "Kirmizi İçin 1" << "           Güncel Dolarınız :" << Dolar << "\n\n";
        cout << "Mavi İçin 2" << "\n\n";
        cout << "Yeşil İçin 3" << "\n\n";

        cin >> bantsecim;

        cout << "Yatirmak istediğiniz tutar: ";
        cin >> YatirilanDolar;

        // Para Kontrolü
        if (YatirilanDolar > Dolar) {
            cout << "Yeterli Bakiyeniz Yok.\n";
            return 0;
        }

        if (YatirilanDolar <= 0) {
            cout << "Bakiye Boş veya Geçersiz Girdiniz.\n";
            return 0;
        }

        // Bakiye Eksiltme
        Dolar -= YatirilanDolar;
        cout << "Güncel Bakiyeniz: " << Dolar << "\n";

        // Sayının Gelme Durumu
        int BilgisayarSecim;
        int sayi = rand() % 16 + 1;

        if (sayi <= 8) {
            BilgisayarSecim = 1; // Kırmızı
        } else if (sayi <= 15) {
            BilgisayarSecim = 2; // Mavi
        } else {
            BilgisayarSecim = 3; // Yeşil
        }

        cout << "Bilgisayar Seçimi = ";
        if (BilgisayarSecim == 1) cout << "Kirmizi\n";
        else if (BilgisayarSecim == 2) cout << "Mavi\n";
        else cout << "Yeşil\n";

        // Kazanç / Kayıp Hesaplama
        if (bantsecim == BilgisayarSecim) {
            if (bantsecim == 1) Dolar += YatirilanDolar * 0.2;
            else if (bantsecim == 2) Dolar += YatirilanDolar * 1.5;
            else if (bantsecim == 3) Dolar += YatirilanDolar * 20;

        } else {
            if (bantsecim == 1 && (BilgisayarSecim == 2 || BilgisayarSecim == 3)) Dolar -= YatirilanDolar * 0.2;
            else if (bantsecim == 2 && (BilgisayarSecim == 1 || BilgisayarSecim == 3)) Dolar -= YatirilanDolar * 1.5;
            else if (bantsecim == 3 && (BilgisayarSecim == 1 || BilgisayarSecim == 2)) Dolar -= YatirilanDolar * 20;

            cout << "Maalesef Kaybettiniz.\n";
        }

        cout << "Güncel Para: " << Dolar << "\n";

        return 0;
    }
}
