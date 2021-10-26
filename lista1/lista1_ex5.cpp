#include <iostream>
#include <math.h>

int main (){
	using namespace std;
	float h,co,ca;
	cout<<("-------Hipotenusa-------\n");
	cout<<("Informe o valor do Cateto Oposto ( em cm) : ");
	cin>>co;
	cout<<("Informe o valor do Cateto Adjacente (em cm) : ");
	cin>>ca;
	//calculando valor da hipotenusa pela formula h^2=ca^2+co^2 --> h=Raiz(ca^2 + co^2)
	    h=sqrt(pow(ca,2)+pow(co,2));

	cout<<("Logo o valor da Hipotenusa eh : ")<<h <<(" cm");
    cout<<("\n-----------------------");	
	
   return 0;
		
}