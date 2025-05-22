#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int x1, x2;
    int num;
    char opc;

    inicio:
    system("clear");

    cout << "Digite um numero: ";
    cin >> num;

    // 1 = verdadeiro / true ; 0 = falso / false

    // and / && / E
    if (num > 2 && num < 7){
        cout << "\n(and)Valor aceito \n";
    }else{
        cout<< "\n(and)Não aceito \n";
    }

    // or / || / OU
    if (num < 3 || num > 8)
    {
        cout<<"\n(or)Valor aceito\n";
    }
    else
    {
        cout<<"\n(or)Não Aceito\n";
    }
    
    // and or / && || / E OU
    if ((num >= 3 && num <=6) ||(num > 9 && num < 15) || (num > 15 && num <20 ) )
    {
        cout<<"\n(&& / ||)Valor aceito\n";
    }
    else
    {
        cout<<"\n(&& / ||)Não Aceito\n";
    }

    // NOT; 1= verdadeiro ; 0= falso; inverte o valor;
    if (!num)
    {
        cout<<"\nvou ao clube\n";
    }
    else
    {
        cout<<"\nvou ao cinema\n";
    }
    

    cout << "Gostaria de testar novamente?(s/n) ";
    cin >> opc;
    
    if(opc=='s' or opc=='S'){
        goto inicio;
    }

    return 0;
}
