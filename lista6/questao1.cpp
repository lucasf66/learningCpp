#include <iostream>
#include <math.h>
#define pi 3.1415
using namespace std;

class Circulo{
    float r;
    public:
    Circulo(){
        r=2.5;
    }
     float get_r(){
        return r;
    } 
    void set_r(float x){
        r=x;
    }
    float area(){
        return pi*pow(r,2);
    }
    float perimetro(){
        return 2*pi*r;
    }
};

int main(){
    float x;
    Circulo one;
    cout<<"Ao criar o circulo o raio padrão será : "<<one.get_r()<<endl;
    cout<<"Informe o valor do raio para calcular Area e Perimetro: "<<endl;
    cin>>x;
    one.set_r(x);
    cout<<("A sua area é : ")<<one.area()<<endl;
    cout<<("Seu perimetro é : ")<<one.perimetro()<<endl;
    return 0;
}