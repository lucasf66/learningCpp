#include <iostream>
#include <math.h>
using namespace std;
float funcao (float x){
	float y;
    y = pow (x,2) + x + 1.2 ;
    return y;
}

int main(){
	float x; 
    cout<< ("Usando a equacao F(x)=x^2+x+1.2 , informe o valor de x : ") << endl;
    cin >> x;
    cout << ("O Resultado de F(x) = ") << funcao(x) << endl;
	return 0;
}