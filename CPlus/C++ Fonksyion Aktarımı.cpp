include <iostream>
using namespace std;

   

int main(){

struct Car {

    string brand;
    int year ;

}

void function (Car c) {

    cout << "Marka:" << c.brand << "Yıl:" << c.year ;

}

Car araba1 = ("Toyota" , 2018);

function(araba1);

}


