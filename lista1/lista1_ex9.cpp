#include <iostream>
#include <math.h>

using namespace std;

int main (){
	int i ;
	float Angulo_Cos,Angulo_Sen;
	cout <<("--------COSS E SENO ANGULOS 0 a 90 (graus)----------")<<endl;
      for (i = 0 ; i <=90 ; i++){

         Angulo_Cos=cos(i*3.141592/180);
		 Angulo_Sen=sin(i*3.141592/180);
         cout <<( "Angulo ")<<i<<("(graus) Seno : " )<< Angulo_Sen <<("  Cosseno : ")<<Angulo_Cos<<endl;  
	  }
	  cout<<cos(90*3.141592/180);
	
	//Ao executar o progama todos os valores batem certo , porem o de Cos(90) não dá 0; Não sei o motivo, não consegui achar o erro .
	
	
	
	
	return 0;
}