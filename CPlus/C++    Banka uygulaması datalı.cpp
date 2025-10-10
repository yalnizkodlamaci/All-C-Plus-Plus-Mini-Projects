#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
protected:
    string username;
    string password;

public:
    void setUsername(const string& u) { username = u; }
    void setPassword(const string& p) { password = p; }

    string getUsername() { return username; }
    bool checkPassword(const string& p) { return password == p; }
};

class Account : public User {
protected:
    long double para = 0.0;

public:
    void withdraw(long double amount) {
        if (amount > para) {
            cout << "❌ Yetersiz bakiye! Mevcut: " << para << endl;
        } else {
            para -= amount;
            cout << "✅ " << amount << " TL cekildi. Yeni bakiye: " << para << endl;
        }
    }

    void deposit(long double amount) {
        para += amount;
        cout << "✅ " << amount << " TL yatirildi. Yeni bakiye: " << para << endl;
    }

    long double getPara() { return para; }
};

int main() {
    vector<Account> database; // hesaplar
    Account* aktif = nullptr; // giriş yapan kullanıcı

    while (true) {
        cout << "\n--- MENU ---\n";
        if (aktif == nullptr) {
            cout << "1. Kayit Ol\n";
            cout << "2. Giris Yap\n";
            cout << "0. Cikis\n";
        } else {
            cout << "1. Para Yatir\n";
            cout << "2. Para Cek\n";
            cout << "3. Bakiye Gor\n";
            cout << "4. Cikis Yap\n";
        }
        cout << "Secim: ";

        int secim;
        cin >> secim;

        if (aktif == nullptr) {
            if (secim == 0) break;

            else if (secim == 1) {
                Account yeni;
                string u, p;
                cout << "Kullanici adi: "; cin >> u;
                cout << "Sifre: "; cin >> p;
                yeni.setUsername(u);
                yeni.setPassword(p);
                database.push_back(yeni);
                cout << "Hesap olusturuldu!\n";
            }
            else if (secim == 2) {
                string u, p;
                cout << "Kullanici adi: "; cin >> u;
                cout << "Sifre: "; cin >> p;

                bool bulundu = false;
                for (auto &acc : database) {
                    if (acc.getUsername() == u && acc.checkPassword(p)) {
                        aktif = &acc;
                        bulundu = true;
                        cout << " Giris basarili Hosgeldin " << u << endl;
                        break;
                    }
                }
                if (!bulundu) {
                    cout << " Kullanici adi veya sifre hatali!\n";
                }
            }
        } 
        else { 
            if (secim == 1) {
                long double miktar;
                cout << "Yatirilacak miktar: "; cin >> miktar;
                aktif->deposit(miktar);
            }
            else if (secim == 2) {
                long double miktar;
                cout << "Cekilecek miktar: "; cin >> miktar;
                aktif->withdraw(miktar);
            }
            else if (secim == 3) {
                cout << "💰 Bakiye: " << aktif->getPara() << endl;
            }
            else if (secim == 4) {
                cout << " Cikis yapildi.\n";
                aktif = nullptr;
            }
        }
    }
    return 0;
}
