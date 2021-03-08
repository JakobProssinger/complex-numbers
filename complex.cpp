#define _USE_MATH_DEFINES

#include "complex.hpp"
#include <cmath>


Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary){
    magnitude = this->Magnitude();
}

Complex::Complex(Complex &number){
    this->real = number.real;
    this->imaginary = number.imaginary;
    this->magnitude = number.magnitude;
    this->phase = number.phase;
}


double Complex::Magnitude(){
    return sqrt(this->real * this->real + this->imaginary * this->imaginary);
}

double Complex::Phase(){ //Phase in radiants
    return atan2(this->imaginary, this->real);
}


//!toString

std::string Complex::toEuler(bool mode){
    std::string string = "";
    if(mode){   //degrees

    } else {   //radiants

    }
    return string;
}

std::string Complex::toString(bool mode){
    std::string string = "";
    if(mode){   //Degrees

    } else {   //radiants

    }
    return string;
}

//!Getters and Setters

double Complex::getRealpart(){
    return this->real;
}

void Complex::setRealpart(double real) {
    this->real = real;
    this->magnitude = this->Magnitude();
}

double Complex::getImaginarypart(){
    return this->imaginary;
}

void Complex::setImaginarypart(double imaginary){
    this->imaginary = imaginary;
    this->magnitude = this->Magnitude();
}

double Complex::getMagnitude(){
    return this->magnitude;
}

double Complex::getPhase(bool mode){
    if(mode) //degrees
        return (this->phase * 180) / M_PI;
    
    return this->phase; //radiants
}

/*//TODO
    overrite =, -, + to make operations with complex numbers

*/
