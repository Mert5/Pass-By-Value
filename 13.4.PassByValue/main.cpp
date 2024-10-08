#include <iostream>

// REFERENCE => https://www.youtube.com/watch?v=8jLOx1hD3_o

void say_age(int age){  // Parameter
    ++age;      // Not original. A copy variable.
    std::cout << "You're " << age << " years old. " << " &age is : " << &age << std::endl;
}


int main(){

    int age{23};    // local
    
    std::cout << "Before call : " << age << " &age is : " << &age << std::endl;
    say_age(age);   // Argument
    std::cout << "After call : " << age << " &age is : " << &age << std::endl;


    return 0;
}
