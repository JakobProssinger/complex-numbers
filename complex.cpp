#include "complex.hpp"
#include <math.h> 

Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary){
    magnitude = this->Magnitude();
}

double Complex::Magnitude(){
    return sqrt(this->real * this->real + this->imaginary * this->imaginary);
}

void Complex::setRealpart(double real) {
    this->real = real;
    this->magnitude = this->Magnitude();
}

double Complex::getRealpart(){
    return this->real;
}

void Complex::setImaginarypart(double imaginary){
    this->imaginary = imaginary;
    this->magnitude = this->Magnitude();
}

double Complex::getImaginarypart(){
    return this->imaginary;
}

double Complex::getMagnitude(){
    return this->magnitude;
}

/*//TODO
    overrite =, -, + to make operations with complex numbers
    
*/
