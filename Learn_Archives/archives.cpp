#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc,char*argv[]){
    ofstream saida;
    saida.open("texto.txt",ios::app);
    if(!saida){
        cout<<"ERRO"<<endl;
        return 1;
    }
    string nome = "Lucas Ferreira";
    saida<<nome<<endl;
    string mudar=argv[1];
    if(nome.find(mudar)!=-1){
        nome.replace(nome.find(mudar),mudar.length(),"Banana");
    }
    saida<<nome<<endl;
    saida.close();
    ifstream entrada;
    entrada.open("texto.txt");
    if(!entrada){cout<<"ERRO"<<endl; return 1;}
    while(entrada>>nome){
        cout<<nome<<endl;
    }
    entrada.close();
    return 0;
}