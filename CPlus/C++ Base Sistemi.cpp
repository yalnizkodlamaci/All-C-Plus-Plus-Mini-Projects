#include <iostream>
using namespace std;




class Base // Base sistemi bu classın içinde tutulmalı.
{
    string ırk;
    int can;
    int xp;
    int level;

    Base(const string& I, const int c, const int x, const int l) : ırk(I), can(c), xp(x),level(l)
    {

    }

    string getIrk() {return ırk;}
    int getCan() {return can;}
    int getXp() {return xp;}
    

    void TakeDamage(int dmg) {can -= dmg; if(can < 0) health = 0;}

    void CheckUpgrade() //Base Xp Kontrolcüleri
    {
        if(level == 1 && xp > 100)
        {
           cout << "İlk Level" ;
        }

        if(level == 2 && xp > 200)
        {
            cout << "Level 2'ye yükseltildi."
        }

        if(level == 3 && xp > 300)
        {
            cout << "Level 2'ye yükseltildi."
        }

    }

    void gainXp(int amount) //Base Xp Kazanımı ve Upgrade Kontrolü
    {
       xp += amount ;
       CheckUpgrade();
    }

    void ShowStatus() //Base Durumu
    {
        cout << "Base Level: " << level << " | Can: " << can << " | XP: " << xp << endl;
    }
};
    

class Unit{}
class Engine{}




int main()
{



}