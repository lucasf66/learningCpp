#include <iostream>
using namespace std;

int main(){
    int matriz[10][10],i,j;
    int *p;
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            matriz[i][j]=0;
            cout<<"Matriz["<<i+1<<"]["<<j+1<<"] = "<<matriz[i][j]<<endl;
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
        do{
            *p=rand()%101;
        }while(*p==0);
        matriz[i][j]=*p;
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            cout<<"Matriz["<<i+1<<"]["<<j+1<<"] = "<<matriz[i][j]<<endl;
        }
    }
    return 0;
}