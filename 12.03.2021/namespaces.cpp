#include <iostream>
int k = 10;
int main(){
    /*std::cout << k << std::endl;
    {
        int k = 6;
        std::cout << k << std::endl;
        std::cout << "But We can still display global k! " << ::k << std::endl;
    }
    std::cout << k << std::endl;*/

    std::cout << "Choose level[1-5]" << std::endl;
    int wybr;
    std::cin >> wybr;
    const int levelOfSuspecting{wybr};
    std::cout << levelOfSuspecting << std::endl;


    //Difference between const and constexpr
    //const - we create it during a program
    //constexpr - it's alreat created (pi or Avogadro constans)
    //constexpr = constant expression
    //constexpr is MUCH faster than const

    constexpr float radius{22.5};
    constexpr float pi{3.14};
    constexpr float result = radius*pi*2;

    std::cout << result << std::endl;

    //109
}
