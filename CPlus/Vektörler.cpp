#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{

    vector<int> users = {1,2,3} ;


    int aranacak;

    cout << "Aranacak Sayı:" ;

    cin >> aranacak ;

    


    users.push_back(4);
    users.insert(users.begin() + 2 , 9); 
    users.emplace(users.begin() + 2 , 8);

    users.clear();

    users.push_back(1);
    users.pop_back();
    users.size();


    bool bulundu = false;

    for ( int x : users) 
    {

        if(x == aranacak)
        {

            bulundu = true;
            break;

        }
    }

    

    if(bulundu) cout << "Sayi Bulundu.";
    else cout << "Sayı Bulunamadı";



}