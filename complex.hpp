#ifndef COMPLEX_HPP
#define COMPLEX_HPP

#include <string>
class Complex{
    private:
        double real;
        double imaginary;
        double magnitude;
        double phase;   
    public:
        //constructor
        Complex();
        Complex(double a, double b);
        Complex(const Complex &number);

        //overloading operators 
        Complex operator + (Complex const &number);
        Complex operator - (Complex const &number);
        Complex operator * (Complex const &number);
        Complex operator / (Complex const &number);
        //calculations
        double Magnitude();
        double Phase();
        Complex powc(Complex number);
        Complex powc(Complex number, double exponent);
        Complex sqrtc(Complex number);
        
        //toString
        std::string toEuler(bool mode);
        std::string toString(bool mode);

        //getters and setters
        void setRealpart(double real);
        double getRealpart();
        void setImaginarypart(double imaginary);
        double getImaginarypart();
        double getMagnitude();
        double getPhase(bool mode);


};
#endif // COMPLEX_HPP