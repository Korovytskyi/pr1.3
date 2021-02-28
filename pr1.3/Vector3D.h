#pragma once
#include <sstream>
#include <string>
#include <iostream>
using namespace std;
class Vector3D
{
private:
	double x;
	double y;
	double z;
public:
	void Read();
	bool Init(int x, int y, int z);
	void Display() const;
	void SetX(int value) { x = value; };
	void SetY(int value) { y = value; };
	void SetZ(int value) { z = value; };
	double GetX() const { return x; };
	double GetY() const { return y; };
	double GetZ() const { return z; };
	string toString() const;
	void scalar() const;
	void Distance() const { cout << "dov. vectora  " << sqrt((x * x) + (y * y) + (z * z)) << endl; };
	void isEqual() const;
	void isEqual2() const;
};
