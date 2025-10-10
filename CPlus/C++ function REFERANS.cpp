include <iostream>
using namespace std;

   

int main(){

   void swapNums ( int &x , int &y){

    int z = x;
    x = y;
    y = z;

}

int firstNum = 10;
int secondNum = 20;

cout << "Before Swap:" << "\n";
cout << firstNum << secondNum << "\n" ;

swapNums (firsNum, secondNum);

cout << "After Swap:" << "\n" ;
cout << firstNum << secondNum ;

}


