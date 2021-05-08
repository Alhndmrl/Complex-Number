/*Alihan Demirel
  *complexnumber.cpp
  */

#include <iostream>
#include "complexnumber.h"
#include <cmath>

using namespace std;
Complex::Complex()
{
}
Complex::Complex(int r, int i)
{
    real = r;
    imaginary = i;
}
Complex::Complex(double r)
{
    real = r;
    imaginary = 0;
}
const Complex operator+(const Complex &complex1, const Complex &complex2)
{
    Complex x;

    x.real = complex1.real + complex2.real;
    x.imaginary = complex1.imaginary + complex2.imaginary;
    return x;
}
const Complex operator+(const Complex &complex1, int i)
{
    Complex x;
    x.real = complex1.real + i;
    x.imaginary = i;

    return x;
}
const Complex operator+(int r, const Complex &complex2)
{
    Complex x;

    x.real = r;
    x.imaginary = r + complex2.imaginary;

    return x;
}
const Complex operator-(const Complex &complex1, const Complex &complex2)
{
    Complex x;

    x.real = complex1.real - complex2.real;
    x.imaginary = complex1.imaginary - complex2.imaginary;
    return x;
}
const Complex operator-(const Complex &complex1, int i)
{
    Complex x;
    x.real = complex1.real - i;
    x.imaginary = i;

    return x;
}
const Complex operator-(int r, const Complex &complex2)
{
    Complex x;

    x.real = r;
    x.imaginary = r - complex2.imaginary;

    return x;
}
const Complex operator-(const Complex &complex1)
{
    Complex x;

    x.real = complex1.real * -1;
    x.imaginary = complex1.imaginary * -1;

    return x;
}
const Complex operator*(const Complex &complex1, const Complex &complex2)
{
    Complex x;

    x.real = complex1.real * complex2.real + complex1.imaginary * complex2.imaginary;
    x.imaginary = complex1.real * complex2.imaginary + complex1.imaginary * complex2.real;

    return x;
}
const Complex operator*(const Complex &complex1, int r)
{
    Complex x;

    x.real = complex1.real * r;
    x.imaginary = complex1.imaginary * r;

    return x;
}
const Complex operator*(int r, const Complex &complex2)
{
    Complex x;

    x.real = complex2.real * r;
    x.imaginary = complex2.imaginary * r;

    return x;
}
const bool operator==(const Complex &complex1, const Complex &complex2)
{
    if (complex1.real == complex2.real && complex1.imaginary == complex2.imaginary)
    {
        return true;
    }
    else
    {
        return false;
    }
}
const bool operator!=(const Complex &complex1, const Complex &complex2)
{
    if (complex1.real != complex2.real && complex1.imaginary != complex2.imaginary)
    {
        return true;
    }
    else
    {
        return false;
    }
}
ostream &operator<<(ostream &output, const Complex &complex1)
{
    output << complex1.real << "+" << complex1.imaginary << "i" << endl;
    return output;
}

istream &operator>>(istream &input, Complex &complex1)
{
    cout << "Real part:";
    input >> complex1.real;
    cout << "İmaginary Part:";
    input >> complex1.imaginary;
    return input;
}
const bool operator>(const Complex &complex1, const Complex &complex2)
{
    int x = sqrt((complex1.real * complex1.real) + (complex1.imaginary * complex1.imaginary));
    int y = sqrt((complex2.real * complex2.real) + (complex2.imaginary * complex2.imaginary));

    if (x > y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
const bool operator>=(const Complex &complex1, const Complex &complex2)
{
    int x = sqrt((complex1.real * complex1.real) + (complex1.imaginary * complex1.imaginary));
    int y = sqrt((complex2.real * complex2.real) + (complex2.imaginary * complex2.imaginary));

    if (x >= y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
const bool operator<(const Complex &complex1, const Complex &complex2)
{
    int x = sqrt((complex1.real * complex1.real) + (complex1.imaginary * complex1.imaginary));
    int y = sqrt((complex2.real * complex2.real) + (complex2.imaginary * complex2.imaginary));

    if (x < y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
const bool operator<=(const Complex &complex1, const Complex &complex2)
{
    int x = sqrt((complex1.real * complex1.real) + (complex1.imaginary * complex1.imaginary));
    int y = sqrt((complex2.real * complex2.real) + (complex2.imaginary * complex2.imaginary));

    if (x <= y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
const Complex &Complex::operator=(const Complex &complex1)
{
    real = complex1.real;
    imaginary = complex1.imaginary;
    return *this;
}
const Complex operator+=(Complex &complex1, Complex &complex2)
{
    complex1.real += complex2.real;
    complex1.imaginary += complex2.imaginary;
    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator+=(Complex &complex1, int i)
{
    complex1.real = complex1.real + i;
    complex1.imaginary = complex1.imaginary;
    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator-=(Complex &complex1, Complex &complex2)
{
    complex1.real -= complex2.real;
    complex1.imaginary -= complex2.imaginary;
    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator-=(Complex &complex1, int i)
{
    complex1.real = complex1.real - i;
    complex1.imaginary = complex1.imaginary;
    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator/=(Complex &complex1, Complex &complex2)
{
    complex2.real = complex2.real;
    complex2.imaginary = -complex2.imaginary;

    complex1.real = (complex1.real * complex2.real) + (-(complex1.imaginary * complex2.imaginary));
    complex1.imaginary = (complex1.real * complex2.imaginary) + (complex2.real * complex1.imaginary);

    complex2.real = (complex2.real * complex2.real) + (-(complex2.imaginary * complex2.imaginary));
    complex2.imaginary = (complex2.real * complex2.imaginary) + (complex2.real * complex2.imaginary);

    return Complex((complex1.real / complex2.real), (complex1.imaginary / complex2.real));
}
const Complex operator/=(Complex &complex1, int i)
{
    complex1.real = complex1.real / i;
    complex1.imaginary /= complex1.imaginary / i;
    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator!(const Complex &complex1)
{
    Complex x;

    x.imaginary = -x.imaginary;

    return x;
}
const Complex operator++(Complex &complex1)
{
    complex1.real = (complex1.real) + 1;
    complex1.imaginary = complex1.imaginary;

    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator--(Complex &complex1)
{
    complex1.real = (complex1.real) - 1;
    complex1.imaginary = complex1.imaginary;

    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator++(Complex &complex1, int i)
{
    complex1.real = (complex1.real) + 1;
    complex1.imaginary = complex1.imaginary;

    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator--(Complex &complex1, int i)
{
    complex1.real = (complex1.real) - 1;
    complex1.imaginary = complex1.imaginary;

    return Complex(complex1.real, complex1.imaginary);
}
const Complex operator^(Complex &complex1, int n)
{

    int r = sqrt((complex1.real * complex1.real) + (complex1.imaginary * complex1.imaginary));

    complex1.real = pow(r, n) * sin(n * 0);
    complex1.imaginary = pow(r, n) * cos(n * 0);

    return complex1;
}
Complex average(vector<Complex> v1)
{

    int x = 0, y = 0;

    for (unsigned int i = 0; i < v1.size(); i++)
    {
        x += v1[i].real;
        y += v1[i].imaginary;
    }
    x /= v1.size();
    y /= v1.size();
    return Complex(x, y);
}

double distance(vector<Complex> &v, vector<double> &v2)
{
    double max = 0;
    double way;

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 1; j < v.size(); j++)
        {
            way = sqrt(pow((v[i].real - v[j].real), 2) + pow((v[i].imaginary - v[j].imaginary), 2));
            v2.push_back(way);
        }
    }
    max = v2[0];
    for (int j = 1; j < v2.size(); j++)
    {
        if (max < v2[j])
        {
            max = v2[j];
        }
    }
    return max;
}
