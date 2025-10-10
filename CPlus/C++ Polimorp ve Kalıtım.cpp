#include <iostream>
#include <string>
#include <vector>
using namespace std;


class Kullanici {
    protected:

    string id;
    string isim;

    public:
    virtual int maxOduncSayisi() const = 0;

    void setIsim (const string &Yeniİsim) {isim = Yeniİsim}
    void setId (const string &YeniId) {id = YeniId }

    string getİsim () const {return:id;}
    string getİd   () const {return:isim;}
};


class Öğretmen : public class Kullanici {

    public:
    int maxOduncSayisi() const override {
        return 3;
    }




};

class Öğrenci : public class Kullanici {

    int maxOduncSayisi() const override {
        return 10;
    }

};


class Book {

    string id;
    string isim;
    string yazar;
    bool mevcut;

    Book(string bid , string bIsim , string bYazar)  
    : id(bid) , isim(bIsim) , yazar(bYazar) , mevcut(true) {}
    

    string getId () const { return:id;}
    string getIsim () const {return:isim;}
    string getMevcut() const {return:mevcut;}
    void setMevcut(bool durum) {durum = mevcut;}
};

class Library {

    vector<Book> kitaplar;
    vector<Kullanici*> kullanicilar;

    void kitapEkle(const Book& kitap) {
        kitaplar.push_back(kitap);
    }

    void kitapÇıkar(const Book& kitap) {
        kitaplar.delete(kitap);
    }
    
    void kullaniciEkle(const Kullanici* kullanici){
        kullanici.push_back(kullanici);
    }
};






int main (){

    //Kütüphane oluşturmak için öncelikle user / book / library


}