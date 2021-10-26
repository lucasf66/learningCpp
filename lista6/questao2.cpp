#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Globo{
    int num1,num2,num3,num4,num5,num6;
    public:
    Globo(){
        num1=-1;
        num2=-1;
        num3=-1;
        num4=-1;
        num5=-1;
        num6=-1;
    }
    void gerador(){
        num1=rand()%61;
        num2=rand()%61;
        num3=rand()%61;
        num4=rand()%61;
        num5=rand()%61;
        num6=rand()%61;
    }
    void get_nums(){
         cout<<"Numero 1 : "<<num1<<endl;
         cout<<"Numero 2 : "<<num2<<endl;
         cout<<"Numero 3 : "<<num3<<endl;
         cout<<"Numero 4 : "<<num4<<endl;
         cout<<"Numero 5 : "<<num5<<endl;
         cout<<"Numero 6 : "<<num6<<endl;
    }
};
int main (){
    srand(time(NULL));
    int x,i;
    Globo sorteio;
    cout<<"SORTEIO : "<<endl;
    cout<<"Informe a quantidade de vezes  = "<<endl;
    cin>>x;
    for(i=1;i<=x;i++){
    cout<<"Numeros sorteados :" <<endl;
    sorteio.gerador();
    sorteio.get_nums();
    }
return 0;
}   
