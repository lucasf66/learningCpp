#include <iostream>
#include <math.h>
using namespace std;
void produto_escalar(int x[],int y[]);
void produto_vetorial(int x[],int y[]);
int main(){
        int n,i;
    int *x=new int[3];
    int *y=new int[3];
    cout<<"Preencha o vetor x[3]: "<<endl;
    for(i=0;i<3;i++){
        cin>>x[i];
    }
    cout<<"Preencha o vetor y[3]: "<<endl;
    for(i=0;i<3;i++){
        cin>>y[i];
    }
    cout<<endl;
    cout<<"Escolha a opção : "<<endl;
    cout<<"1 - Produto escalar "<<endl;
    cout<<"2- Produto vetorial "<<endl;
    cout<<"0- Sair"<<endl;
    cin>>n;
    switch (n)
    {
    case 0:
    exit(1);
    case 1:
    produto_escalar(x,y);
    main();
    case 2:
    produto_vetorial(x,y);
    main();
    default:
        break;
    }
    delete[]x;
    delete[]y;
    return 0;
}
void produto_escalar(int x[],int y[]){
    int i,produto=0;
    for(i=0;i<3;i++){
        produto += x[i]*y[i];
    }
    cout<<"O produto escalar eh : " << produto <<endl;
}
void produto_vetorial(int x[],int y[]){
    int vetorial[3],i;
    vetorial[0]=((x[1]*y[2])-(y[1]*x[2]));
    vetorial[1]=-((x[0]*y[2])-(y[0]*x[2]));
    vetorial[2]=((x[0]*y[1])-(y[0]*x[1]));
    cout<<"Produto vetorial : "<<endl;
    for(i=0;i<3;i++){
        cout<<"["<<vetorial[i]<<"]";
    }
    cout<<endl;
}