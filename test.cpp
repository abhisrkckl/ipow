#include <iostream>
#include "ipow.hpp"

int main(){
    
   double x = 2;
   
   for(int n=0; n<11; n++){
	   std::cout<<x<<"^"<<n<<" = "<<ipow(x,n)<<"\n";
   }
   
   return 0;
}
