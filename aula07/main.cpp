/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: fbigal
 *
 * Created on 4 de maio de 2024, 15:46
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    int n1, n2;
    
    n1 = 0 ;
    n2 = 10;
    
    cout << "p0():"<< n1 <<endl;
    n1=n1+1;
    cout << "p1(n1=n1+1):"<< n1 <<endl;
    n1+=10;
    cout << "p2:(n1+=10)"<< n1 <<endl;
    n1-=1;
    cout << "p3:(n1-=1)"<< n1 <<endl;
    n1+=5;
    cout << "p4(n1+=5):"<< n1 <<endl;
    n1++;
    cout << "p5(n1++):"<< n1 <<endl;
    n1--;
    cout << "p6(n1--):"<< n1 <<endl;
    n1*=2;
    cout << "p7(n1*=2):"<< n1 <<endl;
    n1/=2;
    cout << "p8(n1/=2):"<< n1 <<endl;
    ++n1;
    cout << "p9(++n1):"<< n1 <<endl;
    n1=10;
    cout << "p10(n1=10):"<< n1 <<endl;

    cout << "p11(pre incremento '++n1'):"<<++n1 << endl;
    cout << "p12(pre incremento '--n1'):"<<--n1 << endl;

    n1=10;
    cout << "p13(pos incremento 'n1++'):"<<n1++<<endl;
    cout<<"p14(Pos incremento):"<<n1<<endl;

    cout << "p15(pos incremento 'n1--'):"<<n1--<<endl;
    cout<<"p16(Pos incremento):"<<n1<<endl;
    return 0;
}

