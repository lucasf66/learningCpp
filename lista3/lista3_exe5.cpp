#include <iostream>
using namespace std;
int main (){
	int cont=1;
	char a;
   while(cont<=5){
      cout<<("Informe um caracter : " )<< endl;
      	cin >> a;
      	if(a>='0' && a<='9'){
        cout << ("Eh numerico\n") << endl;
          }else{
          	cout << ("Nao eh numerico\n")<<endl;
          }
       	cont++ ;
   	}
	return 0;
}