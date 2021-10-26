#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <cctype>
#include "ProjetoTPClasses.h"

using namespace std;

int main (int argc, char* argv[]){
    int N,V; string t ,ti,tf;

    for(int i=1;i<argc;i++){ //Loop para procurar o nome do arquivo
        if((strcmp(argv[i],"F") == 0)){
            arquivo.set_filename(argv[i+1]);}}

    for(int i=1;i<argc;i++){ //Loop para procurar se existe N
        if((strcmp(argv[i], "N"))==0){
            N = atoi(argv[i+1]);
            arquivo.ReadFN(N);}}

    
    for(int i=1;i<argc;i++){ //Loop para procurar se existe t
       if((strcmp(argv[i], "t"))==0){
            t = argv[i+1];
            arquivo.ReadFt(t);}}
            
    
    for(int i=1;i<argc;i++){ //Loop para procurar se existe V
           if((strcmp(argv[i],"V"))==0){  
                V=atoi(argv[i+1]);
                arquivo.ReadFV(V);}

            if(((strcmp(argv[i],"Vmax")))==0){
                arquivo.ReadFV_Vmax(V);}

            if(((strcmp(argv[i],"Vmin")))==0){
                arquivo.ReadFV_Vmin(V);}}
            
    for(int i=1;i<argc;i++){ //Loop para procurar se existe ti e tf
        if(((strcmp(argv[i],"ti"))|(strcmp(argv[i+2],"tf")))==0){
            ti=argv[i+1];
            tf=argv[i+3];
            arquivo.ReadF_ti_tf(ti,tf);}}

    return 0; 
}