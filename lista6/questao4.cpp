#include <iostream>
#include <math.h>
using namespace std;

class eq2grau{
    float r1,r2,m1,m2;
    public:
    //x é usado para guardar a informação de Delta;
    float x;
    //funcao para setar os valors de r1,r2,m1,m2
    void funcao(float a,float b,float c){
    float delta;
    delta=pow(b,2)-(4*a*c);
    x=delta;
	if(delta<0){
		delta=fabs(delta);
		r1=(b*-1)/2*a;
        m1=fabs((sqrt(delta))/2*a);
	    r2=(b*-1)/2*a;
        m2=fabs((sqrt(delta))/2*a);
	}else if(delta==0){
		r1=(b*-1)/2*a;
	}else{
		r1=((b*-1)+sqrt(delta))/2*a;
		r2=((b*-1)-sqrt(delta))/2*a;
        }
    }    
    //funcao para jogar na tela os zeros;
    void mostrar(){
        if(x<0){
            cout<<"X1 = "<<r1<<" + "<<"j"<<m1<<endl;
            cout<<"X2 = "<<r2<<" - "<<"j"<<m2<<endl;
        }else if(x==0){
            cout<<"X = "<<r1<<endl;
	    }else{
            cout<<"X1 = "<<r1<<endl;
            cout<<"X2 = "<<r2<<endl;
            }
    }
};

int main(){
    float a,b,c;
    eq2grau zeros;
    cout<<"Informe a,b e c para calcular  as raizes do 2 grau: ";
    cin>>a>>b>>c;
    zeros.funcao(a,b,c);
    zeros.mostrar();
}