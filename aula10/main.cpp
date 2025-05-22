/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fbigal
 *
 * Created on 4 de maio de 2024, 19:10
 */

#include <iostream>
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main() {

    int n1, n2, res;
    char opc;
    
    inicio:
    system("clear");
    
    cout << "Digite o valor da nota 1: ";
    cin >> n1;
    cout << "Digite o valor da nota 2: ";
    cin >> n2;
    
    res=n1+n2;
    
    /*
     * >= 60 aprovado
     * >= 40 e < 59 recuperação
     * <40 reprovado
     * 
     */
    
    if (res >= 60){
        cout << "Aluno aprovado!"<<endl;
        
    }else if(res>=40){
        cout <<"Aluno em recuperação"<<endl;
    }else{
        cout << "Aluno reprovado!"<<endl;
    }
    
    cout << "Gostaria de digitar outras notas?(s/n) ";
    cin >> opc;
    
    if(opc=='s' or opc=='S'){
        goto inicio;
    }
    
    return 0;
}

