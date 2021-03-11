#include "../complex.hpp"
#include <iostream>

using namespace std;

bool Test1(){
    Complex number1(3.0, 2.0);
    Complex number2(4.0, 3.0);
    Complex sum = number1 + number2;
    return true;
}

bool Test2(){
    Complex number1(3.0, 2.0);
    Complex number2(4.0, 3.0);
    Complex difference = number2 - number1;

    if(difference.getImaginarypart() != 1.0 && difference.getRealpart() != 1.0){
        return false;
    }

    if()

    return true;
}

bool Test3(){
    Complex number1(3.0, 2.0);
    Complex number2(4.0, 3.0);
    Complex product = number1 * number2;
}

int main(){

    return 0;
}