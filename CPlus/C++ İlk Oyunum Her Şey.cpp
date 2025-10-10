#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cstdlib>

using namespace std;

// TypeWriter fonksiyonu
void TypeWriter(const string &text, int delay = 50) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(delay));
    }
    cout << endl;
}

// Kullanıcı sınıfı
class User {
protected:
    string username;
    string password;
    int money;

public:
    void setMoney(const int m) { money = m; }
    void setUsername(const string& u) { username = u; }
    void setPassword(const string& p) { password = p; }
    string getUsername() { return username; }
    string getPassword() { return password; }
    int getMoney() { return money; }
};

// Account sınıfı User'dan türemiş
class Account : public User {
public:
    Account() {}
    Account(const string& u, const string& p, const int m) { username = u; password = p; money = m; }
};

// Lokasyon sınıfları (boş şimdilik)
class Bilgisayar {
    string isim;
    string işlemci;
    string ram;
    string depolama;
    string ekran;
    string grafik;
    string batarya;
    string bağlantılar;
    string gövde;
    int fiyat;

public:
    Bilgisayar() {}
    Bilgisayar(const string& is, const string& iş, const string& r, const string& d, const string& e, const string& g, const string& bat, const string& bağ, const string& göv, const int f)
        : isim(is), işlemci(iş), ram(r), depolama(d), ekran(e), grafik(g), batarya(bat), bağlantılar(bağ), gövde(göv), fiyat(f) {}

    string getİsim() { return isim; }
    string getİşlemci() { return işlemci; }
    string getRam() { return ram; }
    string getDepolama() { return depolama; }
    string getEkran() { return ekran; }
    string getGrafik() { return grafik; }
    string getBatarya() { return batarya; }
    string getBağlantılar() { return bağlantılar; }
    string getGövde() { return gövde; }
    int getFiyat() { return fiyat; }
};

class SanliKebap {};
class BurgerKing {};

int main() {
    // Menü
    cout << "------- Menu -------" << endl;
    cout << "1. Başla" << endl;
    cout << "2. Ayarlar" << endl;
    cout << "3. Çıkış" << endl;
    int secim;
    cin >> secim;
    system("cls");

    if (secim != 1) return 0;

    // İsim alma
    cout << "İsmini Gir: ";
    string isim;
    cin >> isim;
    system("cls");

    // Oyun başlatılıyor animasyonu
    int baslama = 100;
    TypeWriter("Oyun baslatiliyor...", 100);
    for (int i = 1; i <= baslama; i++) {
        cout << "\r%" << i << flush;
        this_thread::sleep_for(chrono::milliseconds(20));
    }
    cout << endl;
    system("cls");

    // İlk mesajlar
    TypeWriter("Null: Merhaba " + isim + ", benim adım Alis David. "
               "Yeryüzündeki en derin varlıklar, kendi derinliklerini yaratanlardır. "
               "Bunu asla unutma; çünkü kimi zaman kendi varlığından bile şüphe edebilirsin. F4PC%31&3!", 50);

    this_thread::sleep_for(chrono::seconds(2));
    TypeWriter("Null: O da ne? Neler oluyor? ...................................", 50);
    this_thread::sleep_for(chrono::seconds(3));
    TypeWriter("System: kernel: error", 100);
    this_thread::sleep_for(chrono::seconds(2));

    TypeWriter("System Defender: Ahhh, " + isim + "! Az önce sisteme birisi sızdı. Merak etme, seni kurtardım. "
               "Şu anda system:62s1 bölümündesin. Burada koruma altındasın.", 50);
    TypeWriter("System Defender: Garip şeyler yaşadığını biliyorum, " + isim + ". Sana ne söylediğini bilmem gerekiyor.", 50);

    // Karar seçimi
    cout << "\nA : Yalan söyle (1)" << endl;
    cout << "B : Doğruyu söyle (2)" << endl;
    int secim1;
    cin >> secim1;

    Account acc;
    string u, p;

    if (secim1 == 1) {
        TypeWriter(" " + isim + ": Bana hiç bir şey anlatmadı. Üzgünüm, yardımcı olamam.", 50);
        TypeWriter("System Defender: İpucu olması gerekiyordu, lanet olsun. " + isim, 50);

        TypeWriter("Hikaye: Tam da bu esnada göz kapakların açılır ve yaşadığın trajediden sonra "
                   "hiç bir sorun olmadığını ve her şeyin tam anlamıyla kusursuz gittiğini görürsün ve için rahatlar.", 50);

        TypeWriter("System: Hoşgeldin, "+ isim +" dünyaya giriş yapmak için üye ol.", 50);

        // Hesap oluşturma
        TypeWriter("System: Username Belirle.", 50);
        cin >> u;
        acc.setUsername(u);

        TypeWriter("System: Password Belirle.", 50);
        cin >> p;
        acc.setPassword(p);

        TypeWriter("System: Başarıyla kaydın oluşturuldu. Giriş Yap.", 50);

        string Username, Password;

        // Kullanıcı adı / şifre doğrulama
        while (true) {
            TypeWriter("System: Kullanıcı Adını Gir:", 50);
            cin >> Username;

            TypeWriter("System: Şifreni Gir:", 50);
            cin >> Password;

            if (Username == u && Password == p) {
                TypeWriter("System: Dünyaya Giriş Yaptın.", 50);

                // Lokasyon seçimi
                TypeWriter("System: Vatan Bilgisayar(1), Şanlı Kebap(2), Burger King(3) konum seçimini yap.", 50);
                int secim2;
                cin >> secim2;

                if (secim2 == 1) TypeWriter("System: Konuma Gönderiliyor VatanBilgisayar...", 50);
                else if (secim2 == 2) TypeWriter("System: Konuma Gönderiliyor SanliKebap...", 50);
                else if (secim2 == 3) TypeWriter("System: Konuma Gönderiliyor BurgerKing...", 50);

                // Menü örneği
                if (secim2 == 1) {
                    cout << "------Menu------" << endl;
                    cout << "1. Satın Al / Özellikleri Gör" << endl;
                    cout << "2. Mağazadan Çık" << endl;

                    int secim3;
                    cin >> secim3;

                    if(secim3 == 1){
                        Bilgisayar a("Lenovo IdeaPad 3", "Intel Core i3 (11./12. nesil) veya AMD Ryzen 3", "8 GB DDR4", "256 GB SSD (NVMe)", "15.6\" 1080p IPS", "Intel UHD / AMD Vega", "~6–8 saat", "Wi-Fi 5, BT 5.0, USB-C, USB-A, HDMI", "Plastik, hafif", 350);
                        Bilgisayar b("Acer Aspire 5", "Intel Core i5 (12./13. nesil) veya AMD Ryzen 5", "16 GB DDR4", "512 GB NVMe SSD", "15.6\" 1080p IPS", "NVIDIA MX550 veya Intel Iris Xe", "~7–9 saat", "Wi-Fi 6, BT 5.1, USB-C, HDMI", "Plastik+Metal", 700);
                        Bilgisayar c("Dell Inspiron 16", "Intel Core i7 (12./13. nesil) veya AMD Ryzen 7", "16–32 GB DDR5", "1 TB NVMe SSD", "16\" 2K IPS", "RTX 3050/3060", "~6–8 saat", "Wi-Fi 6E, BT 5.2, Thunderbolt, HDMI", "Alüminyum kasa", 1200);
                        Bilgisayar d("ASUS ROG Strix G17", "Intel Core i9 (13. nesil) veya AMD Ryzen 9", "32–64 GB DDR5", "1–2 TB NVMe SSD", "17.3\" 2K/4K IPS 165Hz", "RTX 4070/4080/4090", "~5–7 saat", "Wi-Fi 6E, BT 5.3, Thunderbolt 4, HDMI 2.1", "Premium metal kasa", 2500);

                        acc.setMoney(1000);

                        cout << "\n------Bilgisayarlar------\n";
                        cout << "1. " << a.getİsim() << endl;
                        cout << "2. " << b.getİsim() << endl;
                        cout << "3. " << c.getİsim() << endl;
                        cout << "4. " << d.getİsim() << endl;

                        int secim4;
                        cin >> secim4;

                        Bilgisayar *secilen = nullptr;
                        if(secim4 == 1) secilen = &a;
                        else if(secim4 == 2) secilen = &b;
                        else if(secim4 == 3) secilen = &c;
                        else if(secim4 == 4) secilen = &d;

                        if(secilen){
                            cout << "\nÖzellikler:" << endl;
                            cout << "İsim: " << secilen->getİsim() << endl;
                            cout << "İşlemci: " << secilen->getİşlemci() << endl;
                            cout << "Ram: " << secilen->getRam() << endl;
                            cout << "Depolama: " << secilen->getDepolama() << endl;
                            cout << "Ekran: " << secilen->getEkran() << endl;
                            cout << "Grafik: " << secilen->getGrafik() << endl;
                            cout << "Batarya: " << secilen->getBatarya() << endl;
                            cout << "Bağlantılar: " << secilen->getBağlantılar() << endl;
                            cout << "Gövde: " << secilen->getGövde() << endl;
                            cout << "Fiyat: " << secilen->getFiyat() << endl;

                            if(acc.getMoney() >= secilen->getFiyat()){
                                cout << "Satın almak ister misin? (1=Evet, 2=Hayır): ";
                                int al;
                                cin >> al;
                                if(al == 1){
                                    acc.setMoney(acc.getMoney() - secilen->getFiyat());
                                    cout << "Başarıyla satın aldın. Kalan paran: " << acc.getMoney() << endl;
                                }
                            } else {
                                cout << "Yeterli paran yok. Güncel paran: " << acc.getMoney() << endl;
                            }
                        }
                    }
                }
                break;
            } else {
                TypeWriter("System: Kullanıcı adı veya şifre hatalı. Tekrar dene.", 50);
            }
        }

    } else if (secim1 == 2) {
        TypeWriter(" " + isim + ": Şef, gerçekten çok korktum. Varlığımdan şüphe etmem gerektiğini ve "
                   "en derin varlıkların aslında kendi derinliklerini yarattığını söyledi. "
                   "Hiçbir bok anlamadım. Sanırım, kod yardımcı olabilir: F4PC%31&3!", 50);
    }

    return 0;
}
