// testConsoleApp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

class Base
{
public:
	virtual void a(int x) { cout << "Base::a(int)" << endl; }
	// overload the Base::a(int) function
	virtual void a(double x) { cout << "Base::a(double)" << endl; }
	virtual void b(int x) { cout << "Base::b(int)" << endl; }
	void c(int x) { cout << "Base::c(int)" << endl; }
};

class Derived : public Base
{
public:
	// redifine the Base::a() function
	void a(string x) { cout << "Derived::a(string)" << endl; }
	// override the Base::b(int) funcion
	void b(int x) { cout << "Derived::b(int)" << endl; }
	// redefine the Base::c() function
	void c(int x) { cout << "Derived::c(int)" << endl; }
};
int _tmain(int argc, _TCHAR* argv[])
{
	Base b;
	Derived d;

	Base* pb = new Derived;
	Derived* pd = new Derived;
	////////////////////////////////
	b.a(1);							// Base::a(int)
	d.a("1.0");						// Derived::a(string)
	pb->a(1.0);						// Base::a(double)
	cout << endl;

	///////////////////////////////
	b.b(10);						// Base::b(int)
	d.b(10);						// Derived::b(int)
	pb->b(10);						// Derived::b(int)
	cout << endl;

	///////////////////////////////
	b.c(20);						// Base::c(int)		
	d.c(20);						// Derived::c(int)
	pb->c(20);						// Bsse::c(int)
	pd->c(20);						// Derived::c(int)

	delete pb;
	delete pd;
	return 0;
}

