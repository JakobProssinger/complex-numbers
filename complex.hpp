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

        //getters and setters
        void setRealpart(double real);
        double getRealpart();
        void setImaginarypart(double imaginary);
        double getImaginarypart();
        double getMagnitude();

        //calculations
        double Magnitude();
        double Phase();
        double squarec(Complex number);
        double sqrtc(Complex number);
        Complex dividc(Complex number1, Complex number2);
        Complex multiplyc(Complex number1, Complex number2);
        
        //toString
        std::string toEuler(Complex number);


};
#endif // COMPLEX_HPP