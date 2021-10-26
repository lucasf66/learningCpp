#include <iostream>
using namespace std;

int main(){
    int n,j;
    cout<<"Informe um numero de pares , V e I , para ser calculado a Potencia:"<<endl;
    cout<<"Obs: O numero de pares nao pode passar de 50"<<endl;
    cin>>n;
    do{
        cout<<"Numero maior que 50 , tente novamente!"<<endl;
        cin>>n;
    }while(n>50);
    float p[n],v[n],i[n];
    for(j=0;j<n;j++){
        cout<<"Informe o par , V e I ["<<j+1<<"] : "<<endl;
        cin>>v[j]>>i[j];
    }
    for(j=0;j<n;j++){
        p[j]=v[j]*i[j];
        cout<<"P ["<<j+1<<"] = "<<p[j]<<endl;
    }
}