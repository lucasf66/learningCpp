#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cctype>

using namespace std;

//Função para encontrar a posição de início da variável desejada.
int posicao(string total_data[145], int linha, int V){
    int k=0, pos=0;
    for(int j=0; j<1000; j++){
        pos++;
        if(total_data[linha][j] == ','){
            k++;
        }
        if(k==V){break;}
    }
    return pos;
}

class F{ //Classe para Chamar as Funções do Arquivo
    private:
        string filename, total_data[145];
    public:
        void set_filename(char* name){
            //string caminho = "file:///home/lucas/Desktop/Tecnicas/Projeto/";
            filename =name;
        }
        string get_filename(){return filename;}
        void ReadFN(int N);
        void ReadFt(string t);
        void ReadF_ti_tf(string ti,string tf);
        void ReadFV(int V);
        void ReadFV_Vmax(int V);
        void ReadFV_Vmin(int V);
        
}arquivo;

void F::ReadFN(int N){
    ifstream myFile;
    myFile.open(filename);
    int cont=1, i=0;
    string total_data[145];

    while(145>=cont){
        getline(myFile, total_data[i]);
        cont++;
        i++;
    }
for(int i=1; i<145; i++){
        string dado;
       // atualiza a posição de início da variavel desejada a cada loop para cada linha do arquivo.
        for(int j=0; j<1000; j++){        // iniciamos o loop na posicao encontrada.
            if(total_data[i][j] == ','){    // ao encontrar uma vírgula, paramos o loop;
                cout<<" | "<<total_data[i][j];
                break;} 
            else {dado += (total_data[i][j]);}              
        }
}

    myFile.close();   
}

void F::ReadFt(string t){
    ifstream myFile;
    myFile.open(filename);
    int cont=1, i=0;
    string total_data[145];

    while(145>=cont){
        getline(myFile, total_data[i]);
        cont++;
        i++;
    }

    for(int i=1; i<145; i++){
        if(total_data[i].find(t)!= string::npos){//Confere t e joga na tela
            cout << total_data[i] << endl;
                break;
            }
        }

    myFile.close();
}
//Função para Ler um Intervalo de Tempo Tf-Ti
void F::ReadF_ti_tf(string ti,string tf){
    ifstream myFile;
    myFile.open(filename);
    int cont=1, i=0;
    string total_data[145];
    while(145>=cont){
        getline(myFile, total_data[i]);
        cont++;
        i++;
    }
    for(int i=1; i<145; i++){
        if(total_data[i].find(ti)!= string::npos){ //confere ti
            cout << total_data[i] << endl;
            for(int k=i+1; k<145; k++){ //Loop para Intervalo ente ti e tf
                if(total_data[k].find(tf)!= string::npos){//Confere Tf e encerra o Loop
                    cout << total_data[k] << endl;
                    break;
                }else{
                    cout << total_data[k] << endl;
                    }
                }                   
            }
        }
    myFile.close();
}

void F::ReadFV(int V){
    ifstream myFile;
    myFile.open(filename);
    int cont=1, i=0, pos;
    string total_data[145];

    while(145>=cont){
        getline(myFile, total_data[i]);
        cont++;
        i++;
    }

    for(int i=1; i<145; i++){
        pos = posicao(total_data, i, V); // atualiza a posição de início da variavel desejada a cada loop para cada linha do arquivo.
        for(int j=pos; j<1000; j++){ // iniciamos o loop na posicao encontrada.
            if(total_data[i][j] == ','){ // ao encontrar uma vírgula, paramos o loop;
                break;
            } else {cout << total_data[i][j];} // enquanto não encontramos uma vírgula, imprimimos os caracteres da string.
        }
    cout << endl;
    }
    myFile.close();
}

//Leitura do maior valor de uma coluna especificada pelo usuário
void F::ReadFV_Vmax(int V){
    ifstream myFile;
    myFile.open(filename);
    int cont=1, i=0, pos;
    string total_data[145];
    string dado; 
    float atual, maior;
    while(145 >= cont){
        getline(myFile, total_data[i]);
        cont++;
        i++;
    }
    for(int i=1; i<145; i++){
        string dado;
        pos = posicao(total_data, i, V);    // atualiza a posição de início da variavel desejada a cada loop para cada linha do arquivo.
        for(int j=pos; j<1000; j++){        // iniciamos o loop na posicao encontrada.
            if(total_data[i][j] == ','){    // ao encontrar uma vírgula, paramos o loop;
                break;} 
            else {dado += (total_data[i][j]);}  
        }
        if(i==1){maior = stof(dado);}   //Fazendo com que o primeiro valor seja o valor máximo para comecar a comparacao 
            atual = stof(dado);                 // Convertendo o valor da string de dado para a variavel float atual
            if(atual >= maior){maior = atual;}  //Comparando o valor atual com o maior valor, caso seja maior, maior vai receber o valor de atual
    }
    cout << "Valor max: " << maior << endl;
    myFile.close();
}

//Leitura do menor valor de uma coluna especificada pelo usuário
void F::ReadFV_Vmin(int V){
    ifstream myFile;
    myFile.open(filename);
    int cont=1, i=0, pos;
    string total_data[145];
    string dado; 
    float atual, menor;
    while(145>=cont){
        getline(myFile, total_data[i]);
        cont++;
        i++;
    }
    for(int i=1; i<145; i++){
        string dado;
        pos = posicao(total_data, i, V);    // atualiza a posição de início da variavel desejada a cada loop para cada linha do arquivo.
        for(int j=pos; j<1000; j++){        // iniciamos o loop na posicao encontrada.
            if(total_data[i][j] == ','){    // ao encontrar uma vírgula, paramos o loop;
                break;} 
            else {dado+=(total_data[i][j]);}
        }
        if(i==1){menor = stof(dado);}   //Fazendo com que o primeiro valor seja o valor máximo para comecar a comparacao 
            atual = stof(dado);                 // Convertendo o valor da string de dado para a variavel float atual
            if(atual <= menor){menor = atual;}  //Comparando o valor atual com o mmenor valor, caso seja menor, menor vai receber o valor de atual
    }
    cout << "Valor min: " << menor << endl;
    myFile.close();
}
