#include <iostream>
#include <math.h>
#define pi 3.1415
using namespace std;
float area(float r);
float volume(float r);
int main(){
    int n,i;
    float r;
    cout<<"Informe um numero n Para o tamanho do vetor"<<endl;
    cin>>n;
    float *vetor_area=new float[n];
    float *vetor_volume= new float[n];
    float raio[n];
    for(i=0;i<n;i++){
        cout<<"Informe um raio para calcular Area e Volume"<<endl;
        cin>>r;
        raio[i]=r;
        vetor_area[i]=area(r);
        vetor_volume[i]=volume(r);
    }
    for(i=0;i<n;i++){
        cout<<"Raio : "<<raio[i]<<endl;
        cout<<"Area : "<<vetor_area[i]<<" Volume : "<<vetor_volume[i]<<endl;
    }
    delete[] vetor_volume;
    delete[] vetor_area;
    return 0;
}   
    float area(float r){
        return 4*pi*pow(r,2);
    }
    float volume(float r){
        return ((4/3)*pi*pow(r,3));
    }
