#include <iostream>
#include <string.h>
using namespace std;

int main(){

char nm[3][20], aux[20];
int i,j;
for (i = 0; i < 3; i++) {
    cout<<"\nNome :"<<i+1<<endl;
    cin>>nm[i];
}
for (i = 1; i < 3; i++) {
   for (j = 1; j < 3; j++) {
      if (strcmp(nm[j - 1], nm[j]) > 0) {
         strcpy(aux, nm[j - 1]);
         strcpy(nm[j - 1], nm[j]);
         strcpy(nm[j], aux);
      }
   }
}
for (i = 0; i < 3; i++)
    cout<<"\n"<<nm[i]<<endl;
   return 0;
}