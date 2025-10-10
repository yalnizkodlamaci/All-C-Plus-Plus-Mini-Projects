#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

//Banka sistemi yapacağım
//Kullanıcı Olmalı
//Giriş Yapabilmeli.
// ve bu kullancı giriş yapmalı 

class User {
protected:
    string username;
    string password;

public:
    User(const string& u, const string& p) : username(u), password(p) {}

    void setUsername(const string& u) { username = u; }
    void setPassword(const string& p) { password = p; }

    string getUsername() { return username; }
    string getPassword() { return password; }
};

class Account : public User {
protected:
    double balance;

public:
    Account(const string& u, const string& p, const double b)
        : User(u, p), balance(b) {}

    //Account para çekebilir , para yatırabilir.
    void Withdraw(const int w) { balance -= w; }
    void Deposit(const int g) { balance += g; }
};

int findUser(const vector<Account>& users, const string& u)
{
    auto it = find_if(users.begin(), users.end(),
        [&](const Account& a) { return a.getUsername() == u; });
    return it == users.end() ? -1 : int(it - users.begin());
}

void registerAndLogin()
{
    Account user1("", "", 0.0);
    string u, p;

    string* aktif = nullptr;
    string roleUser = "aktif";
    vector<Account> users;

    int secim;

    while (true)
    {
        cout << "------MENU------" << endl;
        cout << "1.Kayıt Ol" << endl;
        cout << "2.Giriş Yap" << endl;
        cout << "3.Çıkış" << endl;

        cin >> secim;

        if (secim == 1) {
            cout << "Kullanıcı Adı:" << endl;
            cin >> u;
            cout << "Şifre:";
            cin >> p;
            user1.setPassword(p);
            user1.setUsername(u);

            cout << "Kayıt Başarılı" << endl;
        }
        else if (secim == 2)
        {
            cout << "Kullanıcı Adı:" << endl;
            cin >> u;
            cout << "Şifre:";
            cin >> p;

            if (u == user1.getUsername() && p == user1.getPassword())
            {
                cout << "Giriş Başarılı " << endl;
                aktif = &roleUser; // kullanmak istiyorsan pointer burada set
            }
            else {
                cout << "Hatalı bilgiler" << endl;
            }
        }
        else if (secim == 3)
        {
            break;
        }
    }
}

int main()
{
    registerAndLogin();
    return 0;
}
