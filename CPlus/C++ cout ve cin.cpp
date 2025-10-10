#include <iostream>
using namespace std;

int main () {
    
    //Ekrana Yazı Yazdırma İlk Satır
    cout << "Hello World" << "\n" ;

    //Ali İle Metenin Yaşları
    int Ali = 21;
    int Mete = 20;

    //Ali İle Metenin Yaşlarını Topla
    cout << Ali + Mete << "\n" ;
    
    //Ali Ve Metenin Yaşlarını Yazdırma
    cout << "Alinin Yaşı:" << Ali << " Metenin Yaşı:" << Mete << "\n" ;


    //Kullanıcı Yaş Girdisi
    int Yaş;
    cout << "Yaşınızı Girin : " << "\n" ;
    cin >> Yaş;
    cout << "Yaşınız :" << Yaş << "\n" ; 

    //Hesap Makinesi Yapımı Basit
    
    int sayı1;
    int sayı2;
    cout << "Toplamak İstediğiniz Sayıları Giriniz." << "\n" ;
      
      cout << "İlk Sayı :" << "\n" ;
      cin >> sayı1 ;
      
      cout << "İkinci Sayı:" << "\n" ;
      cin >> sayı2 ;
      
      cout << "Sayıların Toplamı :" << sayı1 + sayı2 ;
      

    
    return 0;
}