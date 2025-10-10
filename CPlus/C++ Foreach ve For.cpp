#include <iostream>
using namespace std;
#include <cstdlib>

int main() 
{
 
    for (int tekrar = 0; tekrar < 5; ++tekrar){

        cout << "sex" ;
    }


    string itemler[5] ={"Kılıç" , "Kalkan" ,"Ok" , "Yay" , "Vantilatör"} ;
    int random = rand() % 5;


    string secilenitem = itemler[random] ;
  
    switch (random){
        case 0:
        cout << "Ali" << secilenitem ;
        break;
         case 1:
        cout << "Mete"  << secilenitem ;
        break;
         case 2:
        cout << "İzbo"   << secilenitem;
        break;
         case 3:
        cout << "Hizbi"   << secilenitem;
        break; 
        case 4:
        cout << "Fetullah Gülen"   << secilenitem ;
        break;
    }
}
   