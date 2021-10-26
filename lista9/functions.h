#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
void create_insert(string nome_arquivo, int qtd_alunos){
string nome;
float n1,n2,n3;
ofstream Alunos;
cout<<"Nome do arquivo a ser criado : "<<nome_arquivo<<endl;
Alunos.open(nome_arquivo);
if(!Alunos){cout<<"Erro"<<endl;}
for(int i=1;i<=qtd_alunos;i++){
    cin.clear();cin.ignore();
    cout<<"---Aluno["<<i<<"]---"<<endl;
    cout<<"Nome : ";getline(cin,nome);cout<<endl;
    cout<<"Nota 1 : ";cin>>n1;cout<<endl;
    cout<<"Nota 2 : ";cin>>n2;cout<<endl;
    cout<<"Nota 3 : ";cin>>n3;cout<<endl;
    Alunos<<left<<nome<<endl;
    Alunos<<n1<<" "<<" "<<n2<<" "<<n3<<endl;
    }
Alunos.close();
}
void read(string nome_arquivo,int qtd_alunos){
    ifstream Alunos;
    string nome; int i;
    float n1,n2,n3,media,media_geral;
    Alunos.open(nome_arquivo);if(!Alunos){cout<<"Erro"<<endl;}
    for(i=1;i<=qtd_alunos;i++){
    getline(Alunos,nome);
    cout<<"Aluno : "<<nome<<endl;
    Alunos>>n1;
    Alunos>>n2;
    Alunos>>n3;
    media=(n1+n2+n3)/3;
    cout<<"Nota 1 : "<<n1<<" || Nota 2 : "<<n2<<" || Nota 3 : "<<n3<<endl;
    cout<<"Media : "<<media<<endl;
    Alunos.ignore();
    Alunos.clear();
    }
}
void media_geral(string nome_arquivo,int qtd_alunos){
    ifstream Alunos;
    string nome; int i;
    float n1,n2,n3,media,media_geral;
    Alunos.open(nome_arquivo);if(!Alunos){cout<<"Erro"<<endl;}
    for(i=1;i<=qtd_alunos;i++){
    getline(Alunos,nome);Alunos>>n1;Alunos>>n2;
    Alunos>>n3;
    media=(n1+n2+n3)/3;
    media_geral+=media;
    Alunos.ignore();
    Alunos.clear();
    }
    cout<<"Media geral : "<<media_geral<<endl;
}
void media_notas(string nome_arquivo,int qtd_alunos){
    ifstream Alunos;
    string nome; int i;
    float n1,n2,n3,soma_media1,soma_media2,soma_media3;
    Alunos.open(nome_arquivo);if(!Alunos){cout<<"Erro"<<endl;}
    for(i=1;i<=qtd_alunos;i++){
    getline(Alunos,nome);Alunos>>n1;Alunos>>n2;
    Alunos>>n3;
    soma_media1+=n1;
    soma_media2+=n2;
    soma_media3+=n3;
    Alunos.ignore();
    Alunos.clear();
    }
    cout<<"Media geral 1 nota  : "<<soma_media1/qtd_alunos<<endl;
    cout<<"Media geral 2 nota  : "<<soma_media2/qtd_alunos<<endl;
    cout<<"Media geral 3 nota  : "<<soma_media3/qtd_alunos<<endl;
}
void reprovados(string nome_arquivo,int qtd_alunos){
    ifstream Alunos;
    string nome; int i;
    float n1,n2,n3,media;
    Alunos.open(nome_arquivo);if(!Alunos){cout<<"Erro"<<endl;}
    cout<<"----Reprovados-------"<<endl;
    for(i=1;i<=qtd_alunos;i++){
    getline(Alunos,nome);Alunos>>n1;Alunos>>n2;
    Alunos>>n3;
    media=(n1+n2+n3)/3;
    if(media<7){
        cout<<"Nome : "<<nome<<" || Media : "<<media<<endl;
    }
    Alunos.ignore();
    Alunos.clear();
    }
}
void aprovados(string nome_arquivo,int qtd_alunos){
    ifstream Alunos;
    string nome; int i;
    float n1,n2,n3,media;
    Alunos.open(nome_arquivo);if(!Alunos){cout<<"Erro"<<endl;}
    cout<<"----Aprovados-------"<<endl;
    for(i=1;i<=qtd_alunos;i++){
    getline(Alunos,nome);Alunos>>n1;Alunos>>n2;
    Alunos>>n3;
    media=(n1+n2+n3)/3;
    if(media>=7){
        cout<<"Nome : "<<nome<<"  Media : "<<media<<endl;
    }
    Alunos.ignore();
    Alunos.clear();
    }
}
void menor_media(string nome_arquivo,int qtd_alunos){
    ifstream Alunos;
    string nome,nome_menor; int i;
    float n1,n2,n3,media,media_menor=10;
    Alunos.open(nome_arquivo);if(!Alunos){cout<<"Erro"<<endl;}
    for(i=1;i<=qtd_alunos;i++){
    getline(Alunos,nome);Alunos>>n1;Alunos>>n2;
    Alunos>>n3;
    media=(n1+n2+n3)/3;
    if(media<media_menor){
    media_menor=media;
    nome_menor=nome;
    }
    Alunos.ignore();
    Alunos.clear();
    }
    cout<<"Aluno com menor media : "<<nome_menor<<endl;
    cout<<"Media : "<<media_menor<<endl;
}
void maior_media(string nome_arquivo,int qtd_alunos){
    ifstream Alunos;
    string nome,nome_maior; int i;
    float n1,n2,n3,media,media_maior=0;
    Alunos.open(nome_arquivo);if(!Alunos){cout<<"Erro"<<endl;}
    for(i=1;i<=qtd_alunos;i++){
    getline(Alunos,nome);Alunos>>n1;Alunos>>n2;
    Alunos>>n3;
    media=(n1+n2+n3)/3;
    if(media>media_maior){
    media_maior=media;
    nome_maior=nome;
    }
    Alunos.ignore();
    Alunos.clear();
    }
    cout<<"Aluno com menor media : "<<nome_maior<<endl;
    cout<<"Media : "<<media_maior<<endl;
}
void find_aluno(string nome_arquivo,int qtd_alunos,string find){
    ifstream Alunos;
    string nome,nome_maior; int i;
    float n1,n2,n3,media,media_maior=0;
    Alunos.open(nome_arquivo);if(!Alunos){cout<<"Erro"<<endl;}
    for(i=1;i<=qtd_alunos;i++){
    getline(Alunos,nome);Alunos>>n1;Alunos>>n2;
    Alunos>>n3;
    cout<<"----------"<<endl;
    if(nome==find){
        cout<<"Aluno está cadastrado!!"<<endl;
    }else{
        cout<<"Aluno nao está cadastrado!!"<<endl;
    }
    Alunos.ignore();
    Alunos.clear();
    }
}