#include <iostream>
#include <string>

int main() {
    int num {7};
    
    std::cout << "This is how you initialize, kinda dumb but okay: " << num << std::endl;
    std::cerr << "This is a error" << std::endl;
    std::clog << "This is a log" << std::endl;

    // Taking inputs
    int input_num;
    std::string input;
    std::string input_with_space;
    
    std::cin >> input;
    std::cin >> input_num;
    std::getline(std::cin, input_with_space);
    
    std::cout << "Taking input: " << input << std::endl;
    std::cout << "Taking input_num: " << input_num << std::endl;
    std::cout << "Taking input_with_space: " << input_with_space << std::endl;

    return 0;
}
