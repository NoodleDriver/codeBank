#include <stdio.h>

int main(){

   int select = 0;

   printf("Select a number\n");
   scanf("%i", &select);

   if(select == 0){
      printf("if statement. select = 0\n");
   }
   else if(select < 2){
      printf("else if statement. Select < 2\n");
   }
   else{
      printf("else statement.\n");
   }

   switch(select){

       case 0:
         printf("switch. select = 0\n");
       break;

       case 1:
         printf("switch. select = 1\n");
       break;

       default:
         printf("switch default\n");
       break;
   }

   while(select > 0){
       printf("Select = %i, greater than zero\n", select);
       printf("While loop active\n");
       select--;
   }

   for(int i = 0; i < 5; i++){
       printf("for loop at i = %i\n", i);
   }

   return 0;
}
