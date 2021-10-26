#include <iostream>
#include <string.h>
using namespace std;
void vogal(char *nome){
int contador=0,i;
char subs[100];
strcpy(subs,nome);
for(i=0;i<strlen(nome);i++){
    nome[i]=tolower(nome[i]);
    if(nome[i]=='a' || nome[i]=='e'|| nome[i]=='i' || nome[i]=='o' || nome[i]=='u'){
        contador++;
    }
}
    cout<<"O nome "<<subs<<" tem "<<contador<<" vogais !!"<<endl;
}
int main(){
    string name1,name2,name3;
    char array_name1[100],array_name2[100],array_name3[100];
    cout<<"Informe 3 Nomes : "<<endl;
    getline(cin,name1);getline(cin,name2); getline(cin,name3);
    strcpy(array_name1,name1.c_str());
    vogal(array_name1); 
    strcpy(array_name2,name2.c_str());
    vogal(array_name2);
    strcpy(array_name3,name3.c_str());
    vogal(array_name3);  
    return 0;
}