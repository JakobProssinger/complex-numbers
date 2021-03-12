#include "../complex.hpp"
#include <iostream>
#include <cmath>

using namespace std;

bool TestAddition(){
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

bool TestSubtraktion(){
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

bool TestMultiplication() {
    Complex number1(3.0, 2.0);
    Complex number2(4.0, 3.0);
    Complex product = number1 * number2;

    if(product.getImaginarypart() != 6.0 && product.getRealpart() != 12.0){
        return false;
    }

    if(product.getPhase(true) != 26.56505118){
        return false;
    }

    if(product.getMagnitude() != sqrt(5) * 6){
        return false;
    } 

    return true;
}

int main(){
    if(TestAddition()){
        cout << "Everything worked out!!\n";
    }
    if(TestSubtraktion()){
        cout << "Everything worked out!!\n";
    }
    if(TestMultiplication()){
        cout << "Everything worked out!!\n";
    }
    return 0;
}