#include <iostream>
using namespace std;
void valor_medio(float p[],int tam);
int main(){
    int i,n;float x;
    cout<<"Informe um numero para o tamanho do Vetor! "<<endl;
    cin>>n;
    float *p=new float[n];
    for(i=0;i<n;i++){
        p[i]=i;
    }
   for(i=0;i<n;i++)
    cout<<p[i]<<" ";
    cout<<endl;
    valor_medio(p,n);
    delete[] p;
    return 0;
}
void valor_medio(float p[],int tam){
    float soma;
    for(int i=0;i<tam;i++){
        soma+=p[i];
    }
    float media=soma/tam;
    cout<<"Media eh : "<<media<<endl;
}