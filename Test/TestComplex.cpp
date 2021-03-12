#include "../complex.hpp"
#include <iostream>
#include <cmath>

using namespace std;

bool Test1(){
    Complex number1(2.0, 2.0);
    Complex number2(2.0, 2.0);
    Complex sum = number1 + number2;

    if(sum.getImaginarypart() != 4.0 && sum.getRealpart() != 4.0){
        return false;
    }

    if(sum.getPhase(true) != 45.0){
        return false;
    }

    if(sum.getMagnitude() != 4 *  sqrt(2)){
        return false;
    } 

    return true;
}


bool Test2(){
    Complex number1(3.0, 2.0);
    Complex number2(4.0, 3.0);
    Complex difference = number2 - number1;

    if(difference.getImaginarypart() != 1.0 && difference.getRealpart() != 1.0){
        return false;
    }

    if(difference.getPhase(true) != 45.0){
        return false;
    }

    if(difference.getMagnitude() != sqrt(2)){
        return false;
    } 

    return true;
}
/*
bool Test3(){
    Complex number1(3.0, 2.0);
    Complex number2(4.0, 3.0);
    Complex product = number1 * number2;
}
*/
int main(){
    if(Test2()){
        cout << "Everything worked out!!";
    }
    return 0;
}