#include <iostream>
#include <string>
using namespace std;

int main (){
   int n, i , j , c ,t;
   string string1("**");
   string string2("**");
   string space1("''");
   string space2("''"); 
   cout << ("Informe um valor de 2 a 10") << endl;
   cin >> n;
   		if(n<2 || n>10){
   			cout << ("Numero invalido")<< endl ;	
   		    exit(0);
   		}
   			
       /*for (i=0;i<n;i++){
       cout << space1 + string2 << endl;
       string2 += string1;*/
       c = n-1;

       for (i=0;i<n;i++){
        while(t!=c){
        	string1 += string2;
        	t+=1;
        }
       cout << space1 + string2 << endl;
       string2 += string1;
       c-=1;
   }
	return 0;
   		}
