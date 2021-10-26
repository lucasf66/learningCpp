#include <iostream>
#include <math.h>
#define pi 3.14159265359
int main () {
	using namespace std;

	float r ;
	cout<<("----------Circulo---------");
	cout<<("\nInforme o valor do raio : ");
	cin>>(r);
	cout <<("\nRaio (cm) : ")<<r;
	cout <<("\nArea (cm^2): ")<<pi*pow(r,2);
	cout <<("\nPerimetro (cm) : ")<< 2*pi*r;
	cout <<("\n------------------------");

	return 0;
}