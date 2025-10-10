#include <iostream>
using namespace std;

int main () {
    
    
    int KullaniciSayisi ;
    
      //Sayı Bulmaca Oyunu

      cout << "1 ile 100 arasında doğru sayıyı bulursan oyunu kazanırsın." << "\n" ;

      //Sayı Girmesini Sağlamalıyız
      cout << "Şanslı Sayını Gir:" ;

      cin >> KullaniciSayisi ;

      //Kullanıcı Sayısı 46 Olduğunda

      if (KullaniciSayisi == 46) {

        cout << "Doğru Sayıyı Buldun. Tebrikler!!" ;
      }
      // Kullanıcı Sayısı 46 Olmadığında
      else
      {
        cout << "Yeniden Denemelisin Ahmak" ;
      }

      
    return 0;
}