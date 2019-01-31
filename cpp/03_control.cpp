#include <iostream>

int main(){

   int select = 0;

   std::cout << "Please select a number\n";
   std::cin >> select;

   if(select == 0){
      std::cout << "If. Select = 0\n";
   }
   else if(select < 2){
       std::cout << "else If. Select < 2\n";
   }
   else{
       std::cout << "else\n";
   }

   switch(select){

       case 0:
         std::cout << "switch. Select = 0\n";
       break;

       case 1:
         std::cout << "switch. Select = 1\n";
       break;

       default:
         std::cout << "switch. Select = default\n";
       break;
   }

   while(select > 0){
       std::cout << "while loop. select = " << select << " ::select > 0. select--\n";
       select--;
   }

   for(int i = 0; i < 5; i++){
       std::cout << "i = " << i << ".\n";
   }

   return 0;
}
