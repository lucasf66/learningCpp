#include <iostream>
using namespace std;
namespace maria {
int idade = 18;
float cre = 8.3;
void incrementar_idade() { idade++; }
}
namespace jose {
int idade = 21;
float cre = 4.3;
}
namespace lucas {
	int idade = 21;
	float cre = 7.89;
	void idade_lucas(){
		idade= idade +2;
		
	}
	
	
}
int main(){
cout << maria::idade << endl;
maria:: incrementar_idade();
cout << maria::idade << endl;
cout << ("\nLucas , Idade  : " ) << lucas::idade << endl;
cout << ("\n  CRE : ") << lucas::cre << endl;
lucas::idade_lucas();
cout << ("\nIdade incrementada com +2 :") << lucas::idade << endl;


return 0;
}