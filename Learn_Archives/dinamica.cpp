#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char cad[]="lucas Alberto de m ferreira";
    int tam=strlen(cad);
    char *ptr= new char[tam+1];
    if(ptr==NULL){
        cout<<"falta memoria"<<endl;
        return -1;
    }

    strcpy(ptr,cad);
    cout<<"prt = "<<ptr;
    delete []ptr;
    return 0;
}