#include "Vector3D.h"
void Vector3D::Read()
{
	int a, b, c;
	do {
		cout << "Ââåä³òü x: "; cin >> a;
		cout << "Ââåä³òü y: "; cin >> b;
		cout << "Ââåä³òü z: "; cin >> c;
	} while (!(Init(a, b, c)));
}
bool Vector3D::Init(int first, int second, int third)
{
	if (abs(first) <= 100 && abs(second) <= 100 && abs(third) <= 100)
	{
		x = first;
		y = second;
		z = third;
		return true;
	}
	else
	{
		cout << "eror" << endl;
		return false;
	}
}
void Vector3D::Display() const
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
}
void Vector3D::scalar() const
{
	int k;
	cout << "scallar = "; cin >> k;
	cout << "vektor" << "(" << x << ";" << y << ";" << z << ")" << endl;
	cout << "vector*scalar" << "(" << x * k << ";" << y * k << ";" << z * k << ")" << endl;
	cout << "=================================================================================================" << endl;
}

void Vector3D::isEqual() const
{
	cout << "porivnana vectoriv" << endl;
	if (x == y == z)
		cout << "x = ó ; y= z ; x=z" << endl;
	if (x == y && x != z)
		cout << " x = y ; y != z ; x != z " << endl;
	if (x == z && x != y)
		cout << " x = z ; x != y ; y != z " << endl;
	if (y == z && y != x)
		cout << " y = z ; x != y ; x != z " << endl;
	if (x != y && x != z)
		cout << " x != ó ; z != y ; x != z " << endl;
	cout << "==================================================================================================" << endl;
}
void Vector3D::isEqual2() const
{
	cout << "porivnana dovzhyn vectoriv" << endl;
	int c, v, b;
	c = sqrt(x * x + y * y);
	v = sqrt(y * y + z * z);
	b = sqrt(z * z + x * x);
	cout << "dovzhyna xy = " << c << endl;
	cout << "dovzhyna yz = " << v << endl;
	cout << "dovzhyna zx = " << b << endl;
	if (c > v && v > b)
		cout << "xó > yz > zx" << endl;
	if (c < v && v < b)
		cout << "xó < yz < zx" << endl;
	if (c > v && v < b)
		cout << "xó > yz < zx" << endl;
	if (c < v && v > b)
		cout << "xó < yz > zx" << endl;
	if (c == v && v == b)
		cout << "xó = yz = zx" << endl;
	if (c > v && v == b)
		cout << "xó < yz = zx" << endl;
	if (c < v && v == b)
		cout << "xó < yz = zx" << endl;
	if (c == v && v > b)
		cout << "xó = yz > zx" << endl;
	if (c == v && v < b)
		cout << "xó = yz < zx" << endl;
	cout << "==================================================================================================" << endl;
}
string Vector3D::toString() const
{
	stringstream sout;
	sout << "x = " << x << endl;
	sout << "y = " << y << endl;
	sout << "z = " << z << endl;
	return sout.str();
}
