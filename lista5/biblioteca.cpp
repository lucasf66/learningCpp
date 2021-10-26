#include <iostream>
#include <math.h>
using namespace std;
int quadrado(int a){
    return pow(a,2);
}
int cubo(int a){
    return pow(a,3);
}
double fatorial(int a){
    double fat; 
    if (a<=1){
        return (1);
    }else{
        fat = a*fatorial(a-1);
        return fat;
    }
}
void funcao(float a,float b,float c){
float delta;
delta=quadrado(b)-(4*a*c);
	if(delta<0){
		delta=fabs(delta);
		cout<<("X1 = ")<<(b*-1)/2*a<<" + "<<fabs((sqrt(delta))/2*a)<<"i"<<endl;
		cout<<("X2 = ")<<(b*-1)/2*a<<" - "<<fabs((sqrt(delta))/2*a)<<"i"<<endl;
	}else if(delta==0){
		cout<<"X = "<<(b*-1)/2*a<<endl;
	}else{
		cout<<("X1 = ")<<((b*-1)+sqrt(delta))/2*a<<endl;
		cout<<("X2 = ")<<((b*-1)-sqrt(delta))/2*a<<endl;
}
}
void funcao(float b,float c){    
float x;
x=-(c/b);
cout<<"X = "<<x<<endl;
}
int potencia(int a,int n){
    if(n==0){
        return(1);
    }else{
        return a*potencia(a,n-1);
    }
}
void dado(){
    int x=rand()%7;
    if(x==0){
        dado();
    }else{
    cout<<"Valor do dado = "<<x<<endl;
    }
}
int fibonacci(int n){
    if(n==0)
        return (0);
    if (n==1)
        return (1);
    
    return (fibonacci(n-1)+fibonacci(n-2));
    
}
template <class tipo> float retangulo(tipo b , tipo a){
    return b*a;
}