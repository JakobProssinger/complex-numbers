#define _USE_MATH_DEFINES

#include "complex.hpp"
#include <cmath>
#include <math.h>

//!constructor
Complex::Complex(){
    real = 0;
    imaginary = 0;
    magnitude = 0;
    phase = 0;
}
Complex::Complex(double real, double imaginary) : real(real), imaginary(imaginary){
    magnitude = this->Magnitude();
    phase = this->Phase();
}

Complex::Complex(Complex &number){
    this->real = number.real;
    this->imaginary = number.imaginary;
    this->magnitude = number.magnitude;
    this->phase = number.phase;
}

//!overloading operators
Complex Complex::operator + (Complex const &number){
    Complex new_number(real + number.real, imaginary + number.imaginary);
    return new_number;
}


Complex Complex::operator - (Complex const &number){
    Complex new_number(real - number.real, imaginary - number.imaginary);
    return new_number;
}

Complex Complex::operator * (Complex const &number){
    Complex new_number(real * number.real - imaginary * number.imaginary,imaginary * number.real + real * number.imaginary);
    return new_number;
}

Complex Complex::operator / (Complex const &number){
    Complex new_number( (real * number.real + imaginary * number.imaginary)/(number.imaginary * number.imaginary + number.real * number.real)
                        ,(real * number.imaginary + imaginary * number.imaginary) / (number.imaginary * number.imaginary + number.real * number.real));
    return new_number;
}

                    

//!calculations
double Complex::Magnitude(){
    return sqrt(this->real * this->real + this->imaginary * this->imaginary);
}

double Complex::Phase(){ //Phase in radiants
    return atan2(this->imaginary, this->real);
}

Complex Complex::powc(Complex number){
    Complex new_number;
    new_number.real = number.real * number.real;
    new_number.imaginary = number.imaginary * number.imaginary;
    new_number.magnitude = this->Magnitude();
    new_number.phase = this->Phase();
    return new_number;
}

Complex Complex::powc(Complex number, double exponent){
    Complex new_number;
    new_number.real = pow(number.real, exponent);
    new_number.imaginary = pow(number.imaginary, exponent);
    new_number.magnitude = this->Magnitude();
    new_number.phase = this->Phase();
    return new_number;
}

Complex Complex::sqrtc(Complex number){
    Complex new_number;
    new_number.real = sqrt(number.real);
    new_number.imaginary = sqrt(number.imaginary);
    new_number.magnitude = this->Magnitude();
    new_number.phase = this->Phase();
    return new_number;
}

//!toString

std::string Complex::toEuler(bool mode){
    std::string string = "";
    if(mode){   //degrees
    //TODO
    } else {   //radiants
    //TODO
    }
    return string;
}

std::string Complex::toString(bool mode){
    std::string string = "";
    if(mode){   //Degrees
    //TODO
    } else {   //radiants
    //TODO
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
    overrite ==, -, + to make operations with complex numbers
    Testcases for powc, sqrtc, dividc, multiplyc
*/
