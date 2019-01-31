#include <stdio.h>

int main(){
    char name[100] = "Boris";
    int age = 30;
    float height = 6.1;
    
    printf("There was a man called %s.\n", name);
    printf("He was %i years old.\n", age);
    printf("He was %.1f foot tall.\n", height);
    
    return 0;
}
