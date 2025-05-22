/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fbigal
 *
 * Created on 4 de maio de 2024, 16:38
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    
    int num = 10, num2= 50, sol = 5;
    char opc='s';
    
    if (num >= 10){ //teste logicos >, <, <=, >=, ==,?=
        // se verdadeiro
        cout << "valor de num maior ou igual que 10" << endl;
        
    }else{
        // se não verdadeiro (se falso)
        return false;
        
    }
    if (num <= num2){
        cout << "valor de num e menor de num2" << endl;
    }else{
        cout << "valor de num e maior que num2" << endl;
    }
    
    if (sol){
        cout<< "vou ao clube"<<endl;
       
    }else{
        cout<<"vou ao cinema"<<endl;
    }
    
    if (sol>=10){
        cout<< "vou ao clube"<<endl;
       
    }else{
        cout<<"vou ao cinema"<<endl;
    }
    
    return 0;
}

