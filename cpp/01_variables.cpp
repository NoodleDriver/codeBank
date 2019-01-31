#include <iostream>
#include <string>

int main(){

    std::string name = "Boris";
    int age = 30;
    double height = 6.1;
    char grade = 'A';

    std::cout << "There was a man called " << name << ".\n";
    std::cout << "He was " << age << " years old.\n";
    std::cout << "He was " << height << " foot tall and he \n";
    std::cout << "scored a" << grade << " on the test.\n";
    return 0;
}
