//Lucas Alberto de Mendonça Ferreira
//Algumas funções estao na biblioteca.cpp exe:retangulo() da questao 9
#include <iostream>
#include <stdio.h>
#include "biblioteca.cpp"
#include <time.h>
#define pi 3.1415
using namespace std;
void voltar();
void exe1();
void exe2();
void exe3();
void exe4();
void exe5();
void exe6();
void exe7();
void exe8();
void exe9();
void exe10();
void exe11();
void exe12();
int main(){
    int x;
    cout<<"Escolha um numero de 1 à 12 para seu exercicio"<<endl;
    cin>>x;
    if(x>=1 && x<=12){
    switch(x){
    case 1:
    exe1();break;
    case 2:
    exe2();break;
    case 3:
    exe3();break;
    case 4:
    exe4();break;
    case 5:
    exe5();break;
    case 6:
    exe6();break;
    case 7:
    exe7();break;
    case 8:
    exe8();break; 
    case 9:
    exe9();break;
    case 10:
    exe10();break;
    case 11:
    exe11();break;
    case 12:
    exe12();break;
    default:
    cout<<"Em construção"<<endl;voltar();
    }
    }else{
        cout<<"Numero errado"<<endl;
        main();
    }
return 0;
}
//escopo de funcao para voltar em main()
void voltar(){
int x;
cout<<"Deseja voltar pra tela incial ou sair ? Digite 1 para inicio e 0 para sair"<<endl;
cin>>x;
if(x==1){
    main(); 
}else{
    cout<<"Obrigado!!!\n";
    exit(0);
}
}
void exe1(){
float c,f,k;
cout<<"Para converter Celsius em Fahrenheit e Kelvin , informe o valor da Temperatura :"<<endl;
cin>>c;
k=c+273,15;
f=(c*9/5)+32;
cout<<c<<" graus é igual a :"<<endl;
cout<<f<<"F" <<" e "<<k<<"K"<<endl;
voltar();
}
void exe2(){
int menor=0,maior=0,i;
int x;
cout<<"Informe 5 numeros"<<endl;
cin>>x;
menor=x;maior=x;
for(i=0;i<=3;i++){
cin>>x;
if(x>maior){
    maior=x;
}
if(x<menor){
    menor=x;
}
}
cout<<"Maior = "<<maior<<endl;
cout<<"Menor = "<<menor<<endl;
voltar();
}
void exe3(){
cout<<"Informe 5 numeros : "<<endl;
int i , x;
for(i=1;i<=5;i++){
    cout<<"\nInforme um numero : "<<endl;
    cin>>x;
    cout<<("\nO fatorial de ")<<x<<" eh : "<<fatorial(x)<<endl;
    cout<<("\nO Quadrado de ")<<x<<" eh : "<<quadrado(x)<<endl;
    cout<<("\nO Cubo de ")<<x<<" eh : "<<cubo(x)<<endl;
}
voltar();
}
void exe4(){
    int x,c=0;
do{
    cout<<"Insira um valor para calcular o seu quadrado ou zero para sair"<<endl;
    cin>>x;
    if(x!=0)
    cout<<"O quadrado de : "<<x<<" eh : "<< quadrado(x)<<endl;
    c+=1;
}while(x!=0);
cout<<"O progama foi executado "<<c-1<<" vezes !"<<endl;
voltar();
}
void exe5(){
float a,b,c;
	cout<<"Informe o valor de a, b e c para F(x) = ax²+bx+c"<<endl;
	cin>>a>>b>>c;
funcao(a,b,c);
voltar();
}
void exe6(){
float b,c;
cout<<"Informe os valores de b e c , para F(x)=bx+c"<<endl;
cin>>b>>c;
funcao(b,c);
voltar();
}
void exe7(){
int a , n ;
cout<<"Informe o valor de a e n para a^N:"<<endl;
cin>>a>>n;
cout<<"a^n : " <<potencia(a,n)<<endl;
voltar();
}
void exe8(){
    int n,i,x=0;
    cout<<"Informe o valor de N para calcular a sequencia de Fibonacci :"<<endl;
    cin>>n;
    cout<<"0"<<endl;
    for(i=1;i<=n;i++){
        cout<<fibonacci(i)<<endl;
    }
    voltar();
}
void exe9(){
    int x;
    cout<<"Escolha se os numeros serão inteiros(1) ou reais(2) , "<<endl;
    do{
        cin>>x;
        if(x<1 || x>2)
            cout<<"Valor inválido digite novamente!"<<endl;
    }while(x<1 || x>2);
    if(x==1){
        int a , b;
        cout<<"Informe os valores inteiros para base e altura"<<endl;
        cin>>b>>a;
        cout<<"Perimetro do retangulo eh = "<<retangulo(b,a)<<endl;
    }else{
        float a , b;
        cout<<"Informe os valores inteiros para base e altura"<<endl;
        cin>>b>>a;
        cout<<"Perimetro do retangulo eh = "<<retangulo(b,a)<<endl;
    }
    voltar();
}
void exe10(){
    int i;
for(i=1;i<=100;i++){
    //usado %100 para limitar os valores aleatorios
    cout<<i<<" = " << rand()%100<<endl;
}
voltar();
}
void exe11(){
    //nao consegui pegar o espaço com cin
    char x;
    cout<<"DADO"<<endl;
    cout<<"Informe (g) para girar e (q) para sair"<<endl;
    do{
    cin>>x;
    if(x!=103 && x!=113)
        cout<<"invalido tente novamente!"<<endl; 
    }while(x!=103 && x!=113);
    if(x==103){
        do{ 
            dado();
            do{           
                cin>>x;
                if(x!=103 && x!=113)
                    cout<<"invalido tente novamente!"<<endl;
            }while(x!=103 && x!=113);    
        }while(x!=113);
        voltar();
    }else{
        voltar();
    }
}
void exe12(){
float angulo,x;
cout<<"Informe o angulo em Graus para calcular seu cosseno e seno: "<<endl;
cin>>x;
angulo=x*(3.1415/180);
cout<<"Cosseno = "<<cos(angulo)<<" Seno = "<<sin(angulo)<<endl;
voltar();
}