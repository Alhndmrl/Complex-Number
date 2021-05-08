/*Alihan Demirel
  */

#include <iostream>
#include <vector>

using namespace std;

class Complex
{
private:
  int real;
  int imaginary;

public:
  Complex();
  Complex(int r, int i);
  Complex(double r);                                                                //reel sayıyı karmaşık sayıya dönderir
  friend const Complex operator+(const Complex &complex1, const Complex &complex2); //iki karmaşık sayıyı toplar
  friend const Complex operator+(const Complex &complex1, int i);                   //bir karmaşık ile bir tam sayıyı toplar
  friend const Complex operator+(int r, const Complex &complex2);                   //bir karmaşık ile bir tam sayıyı toplar

  friend const Complex operator-(const Complex &complex1, const Complex &complex2); // iki karmaşık sayıyı çıkarır
  friend const Complex operator-(const Complex &complex1, int i);                   // karmalık sayıdan bir tam sayıyı çıkarır
  friend const Complex operator-(int r, const Complex &complex2);                   // tam sayıdan karmaşık sayıyı çıkarır
  friend const Complex operator-(const Complex &complex1);                          //bir karmaşık sayıyı -1 ile çarpar

  friend const Complex operator*(const Complex &complex1, const Complex &complex2); // iki karmaşık sayıyı çarpar
  friend const Complex operator*(const Complex &complex1, int i);                   //bir karmaşık sayı ile bir tam sayıyı çarpar
  friend const Complex operator*(int r, const Complex &complex2);                   //bir karmaşık sayı ile bir tam sayıyı çarpar

  friend const bool operator==(const Complex &complex1, const Complex &complex2); //iki karmaşık sayının eşitliğine bakar
  friend const bool operator!=(const Complex &complex1, const Complex &complex2); //iki karmaşık sayıyı karşılaştırır

  friend ostream &operator<<(ostream &output, const Complex &complex1); // karmaşık sayıyı yazdırır
  friend istream &operator>>(istream &input, Complex &complex1);        // karmaşık sayıyı okur

  friend const bool operator>(const Complex &complex1, const Complex &complex2);  //iki karmaşık sayıyı karşılaştırır
  friend const bool operator<(const Complex &complex1, const Complex &complex2);  //iki karmaşık sayıyı karşılaştırır
  friend const bool operator>=(const Complex &complex1, const Complex &complex2); //iki karmaşık sayıyı karşılaştırır
  friend const bool operator<=(const Complex &complex1, const Complex &complex2); //iki karmaşık sayıyı karşılaştırır

  const Complex &operator=(const Complex &complex1);                     // atama yapmak için
  friend const Complex operator+=(Complex &complex1, Complex &complex2); //karmaşık sayı toplama
  friend const Complex operator+=(Complex &complex1, int i);             // tam sayı ve karmaşık sayı toplama
  friend const Complex operator-=(Complex &complex1, Complex &complex2); //karmaşık sayı çıkarma
  friend const Complex operator-=(Complex &complex1, int i);             // tam sayı ve karmaşık sayı çıkarma
  friend const Complex operator/=(Complex &complex1, Complex &complex2); //karmaşık sayı bölme
  friend const Complex operator/=(Complex &complex1, int i);             // karmaşık sayıyı tam sayıya bölme

  friend const Complex operator!(const Complex &complex1); // eşleniğini alma

  friend const Complex operator++(Complex &complex1);        // pre plus işlemi yapar
  friend const Complex operator--(Complex &complex1);        // pre minus işlemi yapar
  friend const Complex operator++(Complex &complex1, int i); // post plus işlemi yapar
  friend const Complex operator--(Complex &complex1, int i); // post minus işlemi yapar

  friend const Complex operator^(Complex &complex1, int n); // karmaşık sayının üssünü alır

  friend Complex average(vector<Complex> v1);                     //karmaşık sayıların ortalamasını hesaplar
  friend double distance(vector<Complex> &v, vector<double> &v2); // karmaşık sayıların arası uzaklığı hesaplar
};