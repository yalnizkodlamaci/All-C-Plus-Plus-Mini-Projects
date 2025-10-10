#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 1) Base önce (Unit içinde Base kullanılıyor)
class Base {
protected:
    string isim;
    int can;
public:
    Base(const string& i, int c) : isim(i), can(c) {}

    virtual void HasarAl(int dmg) {
        can -= dmg;
        if (can < 0) can = 0;
    }

    bool alive() const { return can > 0; }
    int  getCan() const { return can; }
    string getIsim() const { return isim; }
};

// 2) Unit sonra (BaseHasarVer için Base artık tanımlı)
class Unit {
protected:
    string isim;
    int can;
    int saldiriGucu;

public:
    Unit(const string& i, int c, int s) : isim(i), can(c), saldiriGucu(s) {}

    virtual void UnitHasarVer(Unit& target) { target.HasarAl(saldiriGucu); }
    virtual void HasarAl(int dmg) {
        can -= dmg;
        if (can < 0) can = 0;
    }
    virtual void BaseHasarVer(Base& target) { target.HasarAl(saldiriGucu); }

    bool alive() const { return can > 0; }
    int  getCan() const { return can; }
    string getIsim() const { return isim; }
};

// 3) Türevler
class Enemy : public Unit {
public:
    Enemy(const string& i, int c) : Unit(i, c, 20) {}
    void UnitHasarVer(Unit& target) override { target.HasarAl(saldiriGucu + 2); }
    void BaseHasarVer(Base& target) override { target.HasarAl(saldiriGucu + 2); }
};

class Ally : public Unit {
public:
    Ally(const string& i, int c) : Unit(i, c, 12) {}
    void UnitHasarVer(Unit& target) override { target.HasarAl(saldiriGucu + 2); }
    void BaseHasarVer(Base& target) override { target.HasarAl(saldiriGucu + 2); }
};

// 4) BaseItem ve silahlar (Unit artık TAM tanımlı, inline gövde yazabiliriz)
class BaseItem {
protected:
    string isim;
    int saldiriGucu;
public:
    BaseItem(const string& i, int s) : isim(i), saldiriGucu(s) {}
    virtual void HasarVer(Unit& target) { target.HasarAl(saldiriGucu); }
};

class Silah1 : public BaseItem {
public:
    Silah1(const string& i, int s) : BaseItem(i, s) {}
    void HasarVer(Unit& target) override { target.HasarAl(saldiriGucu + 2); }
};

class Silah2 : public BaseItem {
public:
    Silah2(const string& i, int s) : BaseItem(i, s) {}
    void HasarVer(Unit& target) override { target.HasarAl(saldiriGucu + 4); }
};

// 5) Demo
int main() {
    Base kale("Kale", 200);
    Enemy orc("Orc", 100);
    Ally  elf("Elf", 90);
    Silah1 kilic("Kilic", 10);

    kilic.HasarVer(orc);     // silah vurur
    elf.UnitHasarVer(orc);   // elf vurur
    orc.BaseHasarVer(kale);  // orc kaleye vurur

    cout << "Orc HP: "  << orc.getCan()  << endl;
    cout << "Elf HP: "  << elf.getCan()  << endl;
    cout << "Kale HP: " << kale.getCan() << endl;
}
