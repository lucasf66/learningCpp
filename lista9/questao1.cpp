#include <iostream>
#include <string>
#include <fstream>
#include "functions.h"
using namespace std;
void menu(string nome_arquivo,int qtd_alunos);
int main(){
    int qtd_alunos,n;
    string nome_arquivo;
    cout<<"::::::::::::Alunos::::::::::::"<<endl;
    cout<<"Qual nome do arquivo que deseja salvar ?"<<endl;
    cin>>nome_arquivo;
    nome_arquivo.append(".txt");
    cout<<"Quantos Alunos deseja cadastrar ? : ";
    cin>>qtd_alunos;
    create_insert(nome_arquivo,qtd_alunos);
    menu(nome_arquivo,qtd_alunos);
    return 0;
}
void menu(string nome_arquivo,int qtd_alunos){
    int n;
    cout<<endl;
    cout<<"-------------"<<endl;
    cout<<"Selecione uma opção: "<<endl;
    cout<<"1 - Listar Alunos cadastrados"<<endl;
    cout<<"2 - Media Geral"<<endl;
    cout<<"3- Media Geral das Notas (1,2,3)"<<endl;
    cout<<"4 - Lista de Reprovados"<<endl;
    cout<<"5 - Lista de Aprovados"<<endl;
    cout<<"6 - Aluno com menor média"<<endl;
    cout<<"7 - Aluno com maior media"<<endl;
    cout<<"8 - Procurar aluno especifico"<<endl;
    cout<<"0 - Sair"<<endl;
    cin>>n;
    switch(n)
    {
    case 0:
        exit(0);
    case 1: 
        menu(nome_arquivo,qtd_alunos);
    case 2:
        media_geral(nome_arquivo,qtd_alunos);
        menu(nome_arquivo,qtd_alunos);
    case 3:
        media_notas(nome_arquivo,qtd_alunos);
        menu(nome_arquivo,qtd_alunos);
    case 4:
        reprovados(nome_arquivo,qtd_alunos);
        menu(nome_arquivo,qtd_alunos);
    case 5:
        aprovados(nome_arquivo,qtd_alunos);
        menu(nome_arquivo,qtd_alunos);
    case 6:
        menor_media(nome_arquivo,qtd_alunos);
        menu(nome_arquivo,qtd_alunos);
    case 7:
        maior_media(nome_arquivo,qtd_alunos);
        menu(nome_arquivo,qtd_alunos);
    case 8:
        cin.clear();cin.ignore();
        string find;
        cout<<"Qual aluno deseja procurar : "<<endl;
        getline(cin,find);
        find_aluno(nome_arquivo,qtd_alunos,find);
        menu(nome_arquivo,qtd_alunos);
    }
}