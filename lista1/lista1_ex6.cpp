#include <iostream>
#include <math.h>

int main (){
    using namespace std;
	float h,ca,co;
    cout<<("--------Trinagulo retangulo------");
    cout<<("\nInforme o valor do Cateto Oposto ( em cm) : ");
	cin>>co;
	cout<<("Informe o valor do Cateto Adjacente (em cm) : ");
	cin>>ca;
	h=sqrt(pow(ca,2)+pow(co,2));
	cout<<("\nHipotenusa :")<<h<<(" cm");
	cout<<("\nSeno : ")<<co/h;
	cout<<("\nCosseno : ")<<ca/h;
	cout<<("\nTangente : ")<<co/ca;
	
	cout<<("\n-------------------------------");
	
	
}	