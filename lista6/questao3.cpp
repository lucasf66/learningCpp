#include <iostream>
using namespace std;

class Resistor{
    //resistencia
    float r;
    public:
    //setando o valor de R dado pelo usuario:
    void set_r(float x){
        r=x;
    }
    //tensão dada a corrente:
    float tensao_corrente(float i){
        return r*i;
    }
    //corrente dada a tensão:
    float corrente_tensao(float v){
        return v/r;
    }
}resistor1;
int main(){
    float x,i,v;
    cout<<"Para fazermos os calculos de Tensão e Corrente informe a Resistencia :"<<endl;
    cin>>x;
    resistor1.set_r(x);
    cout<<"Informe uma corrente para achar a Tensão: "<<endl;
    cin>>i;
    cout<<"Tensão é : "<<resistor1.tensao_corrente(i)<<" V "<<endl;
    cout<<"Informe uma Tensão para achar a corrente: "<<endl;
    cin>>v;
    cout<<"A corrente é : "<<resistor1.corrente_tensao(v)<<" A "<<endl;
    return 0;
}