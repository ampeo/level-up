// class.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class math {	
public:
	const float pi = 3.1415;
	const float e = 2.7182;
	double sum (double a, double b){
		a += b;
		return (a);
	}
	double sub(double a, double b) {
		a = a - b;
		return(a);
	}
	double mul(double a, double b) {
		a = a * b;
		return(a);
	}
	double div(double a, double b) {
		a = a / b;
		return(a);
	}
	double abs(double a) {
		if (a < 0) a = a*(-1);
		return(a);
	}
	double max(double a, double b) {
		if (a > b) {
			return(a);
		}
		else {
			return(b);
		}
	}
	double min(double a, double b) {
		if (a < b) {
			return(a);
		}
		else {
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
		return(b);
	}
	int pow(int a, int b) {
		for (; b != 1; b--) {
			a *= a;
		}
		return(a);
	}
	double hypot(double a, double b) {
		a = sqrt(a*a + b*b);
		return(a);
	}
	double RadToDegr(double a) {
		a = a * 57.3;
		return(a);
	}
	double DegrToRad(double a) {
		a = a*0.017;
		return(a);
	}
};
int main()
{
	double a, b;
	math c,c1;
	a = c.sum(c1.sum(1, 2), 3);
		cout << a;
	system("pause");
    return 0;
}

