/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include<iostream>

using namespace std;

int main(){
    //tipo nome;
    //tipo nome = valor;
    
    int vidas; //10. 25
    char letra; //'b'
    double decimal; //2.55999999999
    float decimal2; //2.55
    bool vivo; //true or false
    string nome; //"bruno"
    
    vidas=0;
    letra='B';
    decimal=5.2;
    decimal2=5.2;
    vivo=true;
    nome="francisco";
    
    cout << "Digite o numero de vidas: ";
    cin >> vidas;
    cout << "Digite uma letra: ";
    cin >> letra;
    cout << "Dinheiro: ";
    cin >> decimal;
    cout << "Digite seu nome: ";
    cin >> nome;
    
    cout << endl;
    
    cout << "vidas: " <<vidas << endl;
    cout << "letra: " <<letra << endl;
    cout << "Dinheiro: "<<decimal << endl;
    cout << "Valor: "<<decimal2 << endl;
    cout << "Esta vivo: " <<vivo << endl;
    cout << "Nome: "<<nome << endl;
    
    
    
    return 0;
}