/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fbigal
 *
 * Created on 4 de maio de 2024, 14:40
 */

#include <iostream>

using namespace std;

/*
 * 
 */

int g1, g2; //variaveis globais;

int main() {
    
    int n1 , n2; // variaveis locais
    
    //operadores matematicos "+, -, /, *, %, (), "
    
    int res,resto;
    
    g1 = 11;
    g2 = 3;
    n1 = 5;
    n2 = 2;
    
    res=g1+g2+n1+n2;
    
    cout << "Soma: " << res << endl;
    
    res=g1+g2+n1+n2-10;
    
    cout << "Soma: " << res << endl;
    
    res=g1+g2*n2;
    
    cout << "Resultado: " << res << endl;
    
    res=(g1+g2)*n2;
    
    cout << "Resultado: " << res << endl;
    
    res=g1/g2;
    resto=g1%g2;
    
    cout << "Div: " << res << endl;
    cout << "Resto: " << resto << endl;

    return 0;
}

