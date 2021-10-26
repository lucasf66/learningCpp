#include <iostream>
#include <math.h>
using namespace std;

void exe1(){
	char a,b;
	cout<<"Informe duas Letras Maiusculas ou Minusculas"<<endl;
;;
	cin>>a>>b;
	for(a=a+1;a<b;a++){
		cout<<a<<endl;
	}
}
void exe2(){
	int a , b , y=0 , x;
	cout<<("Informe os limites do Somatorio , a e b : ")<<endl;
	cin>>a>>b;
	for(x=a;x<=b;x++){
		y+=x+3;
	}
	cout<<("Y = ")<<y<<endl;
}
void exe3(){
	int a,b,x;
	float raiz;
	cout<<("Informe um Intervalo de A à B")<<endl;
	cin>>a>>b;
	for (x=a;x<=b;x++)
	{
		cout<<"A raiz de "<<x<<" é : "<<sqrt(x)<<endl
;	}
}
void exe4(){
	int n,i,j ;
	string resultado = "";
	cin>>n;
	for(i=n;i<=0;--i)
	{
		cout<<("\r")<<n<<endl;
	}
}
void exe5(){
	int fx=0,min,max,passo,a,b,c;
	cout<<("Informe os Valores para Xmin , Xmax , Passo, a , b e c para F(x) = ax²+bx+c")<<endl;
	cin>>min>>max>>passo>>a>>b>>c;
	for(min;min<=max;min+=passo)
	{
		fx+= (a*pow(min,2)) + (b*min) +c;
		cout<<"Para x = "<<min<<"   F(x) = "<<fx<<endl;
	}
}
void exe6(){
	int a,b,c,fx,delta;
	cout<<"Informe o valor de a,b e c para F(x) = ax²+bx+c"<<endl;
	cin>>a>>b>>c;
	delta=pow(b,2)-(4*a*c);
	if(delta<0){
		delta=fabs(delta);
		cout<<("X1 = ")<<(b*-1)/2*a<<" + "<<fabs((sqrt(delta))/2*a)<<"i"<<endl;
		cout<<("X2 = ")<<(b*-1)/2*a<<" - "<<fabs((sqrt(delta))/2*a)<<"i"<<endl;
	}else if(delta==0){
		cout<<"X = "<<(b*-1)/2*a<<endl;
	}else{
		cout<<("X1 = ")<<((b*-1)+sqrt(delta))/2*a<<endl;
		cout<<("X2 = ")<<((b*-1)-sqrt(delta))/2*a<<endl;
	}

}
void tela_inicial(int n ){
 switch (n){
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
 	default:
 		cout<<"Fim"<<endl;break;
 }
}	
int main(){
	int n;
	do{
	cout<<"Informe um numero entre 1 e 6 ou 0 para sair do programa: "<<endl;
	cin>>n;
	while(n<0 || n>6){
	    cout<<"numero invalido"<<endl;
	    cin>>n;
	}
    
	tela_inicial(n);
	}while(n!=0);
	return 0;
}