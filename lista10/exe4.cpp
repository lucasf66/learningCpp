#include <iostream>
using namespace std;
int main(){
     int matriz[3][3],i,j;
     int p1,p2,p3,n1,n2,n3,det;
    cout<<"Preencha a matriz a 3x3 "<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<"["<<i+1<<"]["<<j+1<<"] : ";
            cin>>matriz[i][j];
        }
    }
p1 = (matriz[0][0] * matriz[1][1] * matriz[2][2]);
p2 = (matriz[1][0] * matriz[2][1] * matriz[0][2]);
p3 = (matriz[2][0] * matriz[0][1] * matriz[1][2]);

n1 = (matriz[2][0] * matriz[1][1] * matriz[0][2]);
n2 = (matriz[0][0] * matriz[2][1] * matriz[1][2]);
n3 = (matriz[1][0] * matriz[0][1] * matriz[2][2]);

det = p1 + p2 + p3 - n1 - n2 - n3;

cout<<"Determinante : "<<det<<endl;

}