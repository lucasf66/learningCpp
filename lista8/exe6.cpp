#include <iostream>
using namespace std;

class Resistencia{
    float R;
    public:
        Resistencia(){
            R=1; 
        }
        void get_r(){
            cout<<R<<endl;
        }
        void set_r(float r){
            R=r;
        }
        void corrente(int i,float v){
            cout<<"Corrente ["<<i+1<<"] = "<<v/R<<endl;
        }
};
int main(){
    Resistencia array_res[10];
    Resistencia *res;
    float r,v;
    int i,escolha;
    res=&array_res[0];
    for(i=0;i<=10;i++){
        cout<<"O valor da Resistencia["<<i+1<<"] eh : ";
        (res+i)->get_r();
        cout<<"Deseja Mudar ? 1 para sim , 0 para não : ";
        cin>>escolha;
        if(escolha==1){
            cout<<"Informe a nova resistencia : "<<endl;
            cin>>r;
            (res+i)->set_r(r);
            cout<<"Agora informe a Tensão : "<<endl;
            cin>>v;
            (res+i)->corrente(i,v);    
        }else{
            cout<<"Agora informe a Tensão : "<<endl;
            cin>>v;
            (res+i)->corrente(i,v);
        }
        }

    return 0;
}