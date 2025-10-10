#include <iostream>
using namespace std;
#include <cstdlib>
#include <vector>

int main() 
{
 
   vector<string> Muhammed = {"hizbi", "izbo"};

  Muhammed[0] = "fetullah gülen" ;

  Muhammed.push_back("pizbi");
  Muhammed.pop_back() ;

  Muhammed.erase(Muhammed.begin() +1 ) ;

  for(string M : Muhammed)
  {
    cout << "MAL İZBO :" << "\n\n" << M ;
  }


}
   