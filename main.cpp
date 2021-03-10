#include "complex.hpp"
#include <iostream>

using namespace std;

int main(){

    Complex num(2.0, 3.0);
    cout << num.getImaginarypart();
    return 0;
}