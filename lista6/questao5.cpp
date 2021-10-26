#include <iostream>
using namespace std;

class Aluno{
    string nome;
    int idade;
    float cre;
    public:
    Aluno(string a,int b,float c){
        nome=a;
        idade=b;
        cre=c;
    }
    void get_info(){
        cout<<"Nome : "<<nome<<endl;
        cout<<"Idade : "<<idade<<endl;
        cout<<"CRE : "<<cre<<endl;
    }

};

int main(){
    string nome;
    int idade;
    float cre;
    cout<<"Cadastro Aluno 1 :"<<endl;
    cout<<"Informe os dados : "<<endl;
    cout<<"Nome : "<<endl;
    cin>>nome;
    do{
        cout<<"Idade:"<<endl;
        cin>>idade;
    }while(idade<=0);   
    do{
        cout<<"CRE (Entre 0 e 10) : "<<endl;
        cin>>cre;
    }while(cre<0 || cre>10);
    Aluno aluno1(nome,idade,cre);
    
    cout<<"Cadastro Aluno 2 :"<<endl;
    cout<<"Informe os dados: "<<endl;
    cout<<"Nome : "<<endl;
    cin>>nome;
    do{
        cout<<"Idade : "<<endl;
        cin>>idade;
    }while(idade<=0);   
    do{
        cout<<"CRE (Entre 0 e 10): "<<endl;
        cin>>cre;
    }while(cre<0 || cre>10);
    Aluno aluno2(nome,idade,cre);

    cout<<"Aluno 1 : "<<endl;
    aluno1.get_info();
    cout<<"Aluno 2 : "<<endl;
    aluno2.get_info();
    
    return 0;
}