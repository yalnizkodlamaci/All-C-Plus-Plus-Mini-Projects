#include <iostream>
#include <vector>
#include <string>
using namespace std;

class UserData
{

    vector<string> users;
    
    public:
    void Ekle(const string& add); 
    void SonSil();
    void indexAdd2(const string& add);
    void kompleSil();
    size_t boyutÖğren() const { return users.size(); }        // eleman sayısı
    size_t kapasiteÖğren() const { return users.capacity(); }  // ayrılan kapasite
    size_t maxBoyutÖğren() const { return users.max_size(); }  // teorik üst sınır
    void kullaniciArama (const string& arama) const ;

};

void UserData::Ekle(const string& add)
{
    users.push_back(add);

}

void UserData::SonSil()
{
   if(!users.empty()) {users.pop_back();}
}

void UserData::indexAdd2(const string& add)
{
    if (users.size() >= 2) users.emplace(users.begin() + 2, add);
    else users.push_back(add);
}

void UserData::kompleSil()
{
    users.clear();
}


void UserData::kullaniciArama(const string& arama)
const {
    bool bulundu = false;

    for (const auto& x : users) {
        if (x == arama) {
            bulundu = true;
            break;
        }
    }

    cout << (bulundu ? "Kullanıcı Bulundu" : "Kullanıcı Bulunamadı");
}


int main()
{


}