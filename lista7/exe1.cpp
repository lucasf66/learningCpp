#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    char senha[8];
    int min=0,i;
    cout<<"Informe uma senha de 8 caracteres"<<endl;
    cin.getline(senha,8);
    for(i=0;i<=8;i++){
        if(isalpha(senha[i])){
            if(isupper(senha[i])){
                min=1;
            }
        }
    }
    if(min==1){
        cout<<"Contem letras maiusculas"<<endl;
    }else{
        cout<<"Apenas letras minusculas"<<endl;
    }
        
        return 0;
}