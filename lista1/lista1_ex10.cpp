#include <iostream>
    using namespace std;
    void piramide (int n){
			int i,j,voltar;
			for(i=1;i<=n;i++){
				voltar=j;
				while(voltar>=1){
					cout<<("*");
					voltar --;
				}
			j=j+2;
            cout<<("\n");			
			}
	}		

	int main(void){
        int n;		

       cout << ("Informe um Numero inteiro N : ");
	   cin >> n ;
		piramide (n);
     return 0;
 }