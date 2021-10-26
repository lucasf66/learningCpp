#include <iostream>
const float pi = 3.1415;
using namespace std;
float peri(float *r);
int main(){
    float r,*p;
    cout<<"Informe o raio de um círculo : "<<endl;
    cin>>r;
    p=&r;
    cout<<"O perimetro é : "<<peri(p)<<endl;
    return 0;
}
float peri(float *r){
    return 2*pi*(*r); 
}