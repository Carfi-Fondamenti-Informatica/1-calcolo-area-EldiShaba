#include <iostream>
   using namespace std;

   int main () {
       float  a, b, c;
   cout<<"Inserire valore i tre valori a, b, c:" <<endl;
       cin>> a,b,c;
       float triangolo = a*b/2;
       float  quadrato= a*a;
       float  rettangolo=a*b;
       float  trapezio=(a+b)*c/2;
   std::cout<< "Area triangolo= " <<  triangolo << " Area quadrato: " <<  quadrato << " Area rettangolo: " << rettangolo << " Area trapezio: "<< trapezio<< std::endl;
   return 0;
   }



