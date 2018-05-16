#include<iostream>
#include "Complex.hpp"
using namespace std;

Complex::Complex(double re, double im)
{
	_re = new double(re);
	_im = new double(im);
}

Complex::Complex(const Complex& newComplex)
{
	_re = new double(*newComplex._re);
	_im = new double(*newComplex._im);
}

Complex::~Complex()
{
	delete(_re);
	delete(_im);
}

Complex Complex::operator +(const Complex & arg) const
{
	return Complex((*_re) + (*arg._re), (*_im) + (*arg._im));
}

Complex Complex::operator +(const int arg) const
{
	return Complex((*_re) + arg, (*_im));
}

Complex Complex::operator -(const Complex & arg) const
{
	return Complex((*_re) - (*arg._re), (*_im) - (*arg._im));
}

Complex Complex::operator -(const int arg) const
{
	return Complex((*_re) - arg, (*_im));
}

Complex Complex::operator *(const Complex comp) const
{
	Complex newComplex;
	*newComplex._re = (*_re)*(*comp._re) - (*_im)*(*comp._im);
	*newComplex._im = (*_re)*(*comp._im) + (*_im)*(*comp._re);
	return newComplex;
}

Complex Complex::operator *(const int nr) const
{
	Complex toReturn((*_re)*nr, (*_im));
	return toReturn;
}

Complex & Complex::operator =(const Complex & arg)
{
	(*_re) = (*arg._re);
	(*_im) = (*arg._im);
	return *this;
}

bool Complex::operator ==(const Complex & arg)
{
	return ((*_re) == (*arg._re) && (*_im) == (*arg._im));
}

bool Complex::operator ==(const int & nr)
{
	return (((*_re) == nr)&&(*_im == 0));
}

Complex::operator double() const
{
	return (*_re);
}

Complex::operator bool() const
{
	return((*_re) && (*_im));
}


Complex operator +(const int b, const Complex & a)
{
	return Complex(b + (*a._re), (*a._im));
}

Complex operator -(const int b, const Complex & a)
{
	return Complex(b - (*a._re), (*a._im));
}

istream& operator>>(istream & input, Complex & complex)
{
	input >> (*complex._re) >> (*complex._im);
	return input;
}

ostream& operator<<(ostream & output, Complex & complex)
{
	output <<(*complex._re) <<" + ("<< (*complex._im)<< "*i)";
	return output;
}