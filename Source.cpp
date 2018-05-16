#include <iostream>
#include "Matrice.hpp"
#include "Complex.hpp"
using namespace std;

int main()
{
	
	Matrice<Complex> a(2,2);
	cout << "Matricea a de 2x2: (numerele complexe vor fi introduse in urmatorul mod: partea reala, spatiu, partea imaginara) " << endl;
	cin >> a;
	cout << "\nMatricea a"<<a<<endl;
	cout << "Inversabila? " << a.inversabilitate() << endl;
	cout << "Determinantul lui a :" << endl;
	Complex x = a.determinant();
	cout << x << endl;
	/*cout << "Add matrice complexa b de 3 linii, 3 coloane: " << endl;
	Matrice<Complex> b(3,3);
	cin >> b;
	cout << endl;
	cout << b;
	cout << endl;
	Complex d = b.determinant();
	cout << "Determinantul lui b: " << endl << d << endl;*/
	Matrice<Complex> c(2, 2);
	cout << "Matricea c: " << endl;
	cin >> c;
	cout << "a*c = " << endl << a*c << endl;
	cout << "3*a: " << endl << 3 * a << endl;
	cout << "a*2: " << endl << a * 2 << endl;
	
	/*
	Matrice<float> m(2, 2);
	cout << "Add float matrix 2x2: " << endl;
	cin >> m;
	cout << "Determinant: " << endl << m.determinant() << endl;
	Matrice<float> m2(4, 4);
	cout << "Add m2 4x4: " << endl;
	cin >> m2;
	cout << "Determinant: " << endl << m2.determinant()<<endl;
	*/
	/*
	Matrice<double> m;
	cout << m<<endl;
	Matrice<double> m1(4,4);
	cout << m1<<endl<<"Add matrix double 4x4:"<<endl;
	cin >> m1;
	cout << "Determinant: " << endl << m1.determinant()<<endl;
	*/
	/*
	Matrice<int> a(2, 2);
	cin >> a;
	Matrice<int> b(2, 2);
	cin >> b;
	cout << a + b;
	*/
	return 0; 
}