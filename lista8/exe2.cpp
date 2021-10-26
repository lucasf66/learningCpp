#include <iostream>
using namespace std;

int main(){ 
    int vetor[1000];
    int *p,i;
    for(i=0;i<1000;i++){
        do{
            *p=rand()%101;
        }while(*p==0);
        vetor[i]=*p;
        cout<<vetor[i]<<" ";
    }
    return 0;
}