#include <iostream>
#include <string>
#include <sstream>
std::string input;
std::getline(std::cin, input);

// put that in string stream
std::stringstream stream(input);

int main(){
    int n;
    while(stream >> n) {
        std::cout << "Found Integer: " << n << "\n";
    }
}