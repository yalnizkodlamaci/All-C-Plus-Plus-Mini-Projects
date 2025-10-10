#include <iostream>
#include <string>
using namespace std;

class User {
protected:
    string name;
    string id;

public:
    void setId(const string& Id) { id = Id; }
    void setName(const string& Name) { name = Name; }

    string getId() { return id; }
    string getName() { return name; }
};

class Account : public User {
protected:
   long double para = 0.0; 

public:
    void withdraw(long double amount) {
        if (amount > para) {
            cout << "Para çekilemez! Mevcut bakiye: " << para << endl;
        } else {
            para -= amount;
            cout << "Para çekildi. Güncel bakiye: " << para << endl;
        }
    }

    void deposit(double amount) {
        para += amount;
        cout << "Para yatırıldı. Güncel bakiye: " << para << endl;
    }

    double getPara() { return para; }
};

int main() {
    Account acc;

    acc.setName("Ali");
    acc.setId("12345");

    cout << "Kullanıcı: " << acc.getName() << " ID: " << acc.getId() << endl;

    acc.deposit(1000);   
    acc.withdraw(300);   
    acc.withdraw(800);   

    return 0;
}
5
