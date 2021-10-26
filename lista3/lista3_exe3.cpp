#include <iostream>
using namespace std;
float resistencia (float r1,float r2){
 return ((r1*r2)/(r1+r2));
}

int main () {
	float r1,r2,req=0;
cout << "Informe o Valor das Resistencias : "<<endl;
cin >> r1;
cin >> r2;
req = resistencia (r1,r2);
cout << "A resitencia equivalente em paralelo eh : "<< req << " Ohms"<<endl;
cout << "O valor da Corrente Eletrica Aplicada a uma Tensao de 5V eh : " << 5/req << " Amperes"<<endl;


return 0;
}
