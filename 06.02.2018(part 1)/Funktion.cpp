#include <vector>
#include <time.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int f(int a)
{
	cout << "Znachenie 1\n";
	return 0;
}

int f(int a, int b)
{
	cout << "Znachenie 2\n";
	return 0;
}

int f(int a, int b, int c)
{
	cout << "Znachenie 3\n";
	return 0;
}

int f1(int m2, int m1, int m0)
{
	int ch = m2 * 100 + m1 * 10 + m0;
	return ch;
}

void kat(double& a, double& b, double c, double q)
{
	a = abs(c*sinf(q));
	double q1;
	q1 = 180 - 90 - q;
	b = abs(c*sinf(q1));
}

void kat1(double* a, double* b, double c, double q)
{
	*a = abs(c*sinf(q));
	double q1;
	q1 = 180 - 90 - q;
	*b = abs(c*sinf(q1));
}
int sum(int a, int b)
{
	return a + b;
}

double razn(double a, double b)
{
	return a - b;
}