#include <iostream>
#include <cstdlib> // rand, srand
#include <ctime>   // time

using namespace std;

int main()
{
    srand(time(0)); // Random seed

    int secim = 1; // Başlangıçta oyun çalışsın

    while(secim == 1) // Kullanıcı 1 seçtiği sürece oyun tekrar başlar
    {
        int bilgisayarinSayisi = rand() % 9 + 1; // 1-9 arası sayı

        cout << "*Bilgisayarın Seçtiği Sayıyı Bul.\n\n";
        cout << "*Bilgisayar 1 ve 10 arasında bir sayı seçecek\n\n";
        cout << "*Eğer seçtiği sayıyı doğru tahmin edersen\n\n";
        cout << "*İzbonun vantilatörünü tokatlama hakkı kazanırsın.\n\n";

        int kullanicininSayisi;
        cin >> kullanicininSayisi;

        // Hatalı giriş kontrolü
        if(cin.fail()) {
            cout << "Boş veya geçersiz giriş! Sistemi manipüle edemezsiniz." << endl;
            return 0; 
        }

        if(kullanicininSayisi > 10) {
            cout << "Malesef 10'dan büyük sayı giremezsin." << endl;
            continue; // Döngü başa dönsün
        }

        if(kullanicininSayisi < 0) {
            cout << "Malesef 0'dan küçük sayı giremezsin." << endl;
            continue; // Döngü başa dönsün
        }

        if(bilgisayarinSayisi == kullanicininSayisi) {
            cout << "Doğru Sayıyı Buldunuz!! Tebrikler" << endl;
        } else {
            cout << "Bugün şanslı gününde değilsin.\n\n";
            cout << "Hz.Bilgisayar : Hahaha, seçtiğim sayı " << bilgisayarinSayisi << " olacaktı.\n\n";
            cout << "Hz.Bilgisayar : Vantilatörle Bol Şans :=)" << endl;
        }

        cout << "\nYeniden başlamak için 1" << endl;
        cout << "Çıkmak için 2" << endl;

        cin >> secim;

        int secim = 2;
    }

    cout << "Oyun kapatılıyor, görüşürüz!" << endl;
    return 0;
}
