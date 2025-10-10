#include <iostream>
using namespace std;


int main() {
    long double kombinasyon1 = carpma(1000) / carpma(576);
    cout << kombinasyon1;
    return 0;
}





//Kombinasyon algoritması 

//Öncelikle sistem şunu yapmalı. biliyoruz ki n n-r kombinasyonu var.

// n! / (n-r)!  yapısı var. yani çarpmayı yazacak.

long double kombinasyon(int n , int r){

     if(r > n-r) r = n-r;
     long double result = 1;

     for(int i = 1, i <= r ,i++) {

        result *= (n-r + i)
        result /= (i)


     }


}


long dobule permutasyon(int n, int r){


    long dobule result = 1;

    for(int i = 1, i <= r, i++) {

        result *= (n-r + i)
   
    }
}







