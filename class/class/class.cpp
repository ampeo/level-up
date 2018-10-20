// class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class math {
private:
	double c;
public:
	double sum (double a, double b){
		c = a + b;
		cout<<a<<"+"<<b<<"="<<c<<endl;
		return (c);
	}
	double sub(double a, double b) {
		c = a - b;
		cout << a << "-" << b << "=" << c<<endl;
		return(c);
	}
	double mul(double a, double b) {
		c = a * b;
		cout << a << "*" << b << "=" << c << endl;
		return(c);
	}
	double div(double a, double b) {
		c = a / b;
		cout << a << "/" << b << "=" << c << endl;
		return(c);
	}
	double abs(double a) {
		if (a < 0) a = a*(-1);
		cout << a<<endl;
		return(a);
	}
	double max(double a, double b) {
		if (a > b) {
			cout <<"max="<< a<<endl;
			return(a);
		}
		else {
			cout << "max=" << b<<endl;
			return(b);
		}
	}
	double min(double a, double b) {
		if (a < b) {
			cout << "min=" << a << endl;
			return(a);
		}
		else {
			cout << "min=" << b;
			return(b);
		}
	}
	int fact(int a) {
		int b = 1;
		int i = 2;
		for (a; a!=1; a--) {
			b *= i;
			i++;
		}
		cout << "Facterial:" << b << endl;
		return(b);
	}
	int round(double a) {
		int b;
		a *= 10;
		b = a;
		if (b % 10 >= 5) {
			b /= 10;
			b += 1;
		}
		else
			b /= 10;
		cout <<"Okryglenie"<< b << endl;
		return(b);
	}
	int pow(int a, int b) {
		for (; b != 1; b--) {
			a *= a;
		}
		cout << "stepen'=" << a<<endl;
		return(a);
	}
	double hypot(double a, double b) {
		a = sqrt(a*a + b*b);
		cout << "gipotenyza=" << a<<endl;
		return(a);
	}
	double RadToDegr(double a) {
		a = a * 57.3;
		cout << "Iz Rad B Gradyci:"<<a<<endl;
		return(a);
	}
	double DegrToRad(double a) {
		a = a*0.017;
		cout << "Iz Rad B Gradyci:"<<a<<endl;
		return(a);
	}
};
int main()
{
	double a, b;
	math c;
	cin >> a >> b;
	c.sum (a, b);
	c.sub(a, b);
	c.mul(a, b);
	c.div(a, b);
	c.abs(a);
	c.max(a, b);
	c.min(a, b);
	c.fact(a);
	c.round(a);
	c.pow(a, b);
	c.hypot(a, b);
	c.RadToDegr(a);
	c.DegrToRad(a);
	system("pause");
    return 0;
}

