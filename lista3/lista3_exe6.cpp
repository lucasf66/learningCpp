#include <iostream>
using namespace std;

void faixa_etaria (int idade){
	if(idade<=10){
		cout << ("Eh crianca") << endl;	
	}else if (idade>10 && idade <=15){
		cout << ("Eh adolecente")<<endl;
	}else if (idade>15 && idade<=25){
		cout <<("Eh jovem")<<endl;
	}else {
		cout << ("Eh adulto") << endl;
	}
} 
int main (){
 int idade ;
 cout <<("Informe a sua idade : ")<< endl;
 cin >> idade;
 faixa_etaria (idade);
 return 0;
}