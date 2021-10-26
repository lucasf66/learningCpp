#include <iostream>
using namespace std;
class Resistencia{
    float R;
    public:
    void set_r(float r){
        R=r;
    }
    void corrente(int i,float v){
        cout<<"Corrente["<<i+1<<"] = "<<v/R<<endl;
    }
};
int main(){
    Resistencia array_res[3];
    Resistencia *res;
    int i ;
    float v[3],r;
    res=&array_res[0];
    for(i=0;i<3;i++){
        cout<<"Informe o Valor das Resistencia : "<<endl;
        cout<<"Par R e V ["<<i+1<<"] = ";
        cin>>v[i]>>r;
        (res+i)->set_r(r);
    }
    for(i=0;i<3;i++){
        (res+i)->corrente(i,v[i]);
    }
return 0;
}