#include "ipow.hpp"
#include <iostream>
 
int main(){
    
   double x=2;
   int n=5;
   
   double result;
   
   std::cout<<"Testing two-argument version...\n";
   result = ipow(x,n);
   std::cout<<x<<"^"<<n<<" = "<<result<<"\n";
   
   std::cout<<"Testing templeted version...\n";
   result = ipow<5>(x);
   std::cout<<x<<"^"<<5<<" = "<<result<<"\n";
   
   return 0;
}
