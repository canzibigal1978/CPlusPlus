/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fbigal
 *
 * Created on 4 de maio de 2024, 16:14
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    int num = 10;
    
    cout <<"(num):"<< num <<endl;
    
    num = num * -1;
    
    cout << "(num * -1):"<<num << endl;
    
    num = 10;
    cout << "(num):"<< num << endl;
    cout << "(-num):"<<-num << endl;
    
    num = 10;
    num = -num;
    
    cout << "(num=-num):"<< num<< endl;
    

    return 0;
}

