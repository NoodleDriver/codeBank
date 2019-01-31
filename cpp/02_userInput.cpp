#include <iostream>
#include <string>

int main(){

    std::string name;

    std::cout << "What is your name?\n";
    std::cin >> name;
    std::cout << "Hello, " << name << ". Have a great day.";
    return 0;
}
