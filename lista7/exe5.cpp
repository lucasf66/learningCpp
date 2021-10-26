#include <iostream>
using namespace std;

int main(){
    int matriz[3][3],i,j,menor,maior,Lmenor,Cmenor,Lmaior,Cmaior;
    cout<<"Insira os dados na matriz[3][3]"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"["<<i+1<<"] ["<<j+1<<"] : ";
            cin>>matriz[i][j];
        }
    }
    menor=matriz[0][0];
    Lmenor=0;Cmenor=0;
    maior=matriz[0][0];
    Lmaior=0;Cmaior=0;
    for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                if(matriz[i][j]<menor){
                    menor=matriz[i][j];
                    Lmenor=j+1;Cmenor=i+1;
                }
                if(matriz[i][j]>maior){
                    maior=matriz[i][j];
                    Lmaior=j+1;Cmaior=i+1;
                }
            }
    }
    cout<<"O menor numero foi : "<<menor<<endl;
    cout<<"Coluna : "<<Cmenor<<" e Linha : "<<Lmenor<<endl;
    cout<<"O maior numero foi : "<<maior<<endl;
    cout<<"Coluna : "<<Cmaior<<" e Linha : "<<Lmaior<<endl;

return 0;
}