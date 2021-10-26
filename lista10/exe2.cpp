#include <iostream>
#include <math.h>
using namespace std;
void valor_quadratico(float p[],int tam);
int main(){
      int i,n;
    cout<<"Informe um numero para o tamanho do Vetor! "<<endl;
    cin>>n;
    float *p=new float[n];
    for(i=0;i<n;i++){
        p[i]=sin(i);
    }
   for(i=0;i<n;i++)
    cout<<p[i]<<" ";
    cout<<endl;
    valor_quadratico(p,n);
    delete[] p;
    return 0;
}
void valor_quadratico(float p[],int tam){
    float soma_quadrado,rms;
    int i;
    for(i=0;i<0;i++){
        soma_quadrado=pow(p[i],2);
    }
    rms= sqrt(soma_quadrado/tam);
    cout<<"O valor medio quadratico eh : "<<rms<<endl;
}