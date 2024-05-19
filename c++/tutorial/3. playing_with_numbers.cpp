#include <iostream>

int main() {
    // NUMBER
    int decimal {13};
    int octal {013};
    int hex {0xff};
    int binary {0b010101011};

    std::cout << decimal << std::endl;
    std::cout << octal << std::endl;
    std::cout << hex << std::endl;
    std::cout << binary << std::endl;

    // int garbage_value;
    int default_init {};
    int bad = 6.9;
    // int good {1.5};

    std::cout << default_init << std::endl;
    std::cout << bad << std::endl;
    
    std::cout << sizeof(bad) << std::endl;

    int is_this_not_a_function_what_the_heck (5.7);
    std::cout << is_this_not_a_function_what_the_heck << std::endl;

    // Point p(); // Declares a function named p that returns a Point, not an object
    // Point p{}; // Clearly initializes a Point object

    // std::vector<int> vec(10, 5); // Initializes a vector with 10 elements, each of value 5
    // std::vector<int> vec{10, 5}; // Initializes a vector with two elements: 10 and 5
  
    signed int x {-4};
    unsigned int y {4};

    short int x1 {4};
    long int x2 {4};
    long long int x3 {4};
    signed short int x4 {4};
    
    std::cout << sizeof(x) << sizeof(y) << sizeof(x1) << sizeof(x2) << sizeof(x3) << sizeof(x4) << std::endl;

    int ch {65};

    std::cout << static_cast<char>(ch) << std::endl;
    
    return 0;
}
