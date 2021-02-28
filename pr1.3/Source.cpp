#include <iostream>
#include <Windows.h>
#include "Vector3D.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Vector3D a;
	a.Read();
	a.Distance();
	a.scalar();
	a.isEqual();
	a.isEqual2();
	cout << a.toString();
}