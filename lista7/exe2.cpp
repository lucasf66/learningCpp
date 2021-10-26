#include <iostream>
#include <cstring>
using namespace std;
int main (){
    char letra,palavra[100];
    int i;
    cout<<"Informe uma Palavra"<<endl;
    cin>>palavra;
    cout<<"Informe agora uma letra"<<endl;
    cin>>letra;
    for(i=0;i<=strlen(palavra);i++){
        if(palavra[i]==letra){
            cout<<"A letra "<<letra<<" está na posição : "<<i<<endl;
          }
    }
    return 0;
}