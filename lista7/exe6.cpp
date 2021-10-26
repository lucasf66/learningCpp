#include <iostream>
using namespace std;
float det(float m[3][3]);
void trans(float m[3][3]);
void mult(float m[3][3],int n);
int main(){
    float m[3][3];
    int i,j,n;
    cout<<"Insira os dados na matriz[3][3]"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"["<<i+1<<"] ["<<j+1<<"] : ";
            cin>>m[i][j];
        }
    }
    cout<<"O valor da determinante da Matriz[3][3] :"<<det(m)<<endl;
    trans(m);
    cout<<"Informe um valor para multiplicar a matriz : "<<endl;
    cin>>n;
    mult(m,n);
return 0;
}
void mult(float m[3][3],int n){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"["<<i+1<<"] ["<<j+1<<"] : "<<n*m[i][j]<<endl;
        }
    }
}
void trans(float m[3][3]){
    int i,j;
    float aux,t[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (i>j){ 
                aux = m[i][j];
                m[i][j] = m[j][i];
                m[j][i] = aux;
                }
            }
        }
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
            t[i][j]=m[i][j];
            }
        }
    cout<<"Matriz transposta : "<<endl;
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"["<<i+1<<"] ["<<j+1<<"] : "<<t[i][j]<<endl;
        }
    }
}
float det(float m[3][3]){
    float determinante;
    determinante=(m[0][0]*m[1][1]*m[2][2]) + (m[0][1]*m[1][2]*m[2][0]) + (m[0][2]*m[1][0]*m[2][1])
                    - ((m[0][1]*m[1][0]*m[2][2]) + (m[0][0]*m[1][2]*m[2][1]) + (m[0][2]*m[1][1]*m[2][0]));
    return determinante;
}