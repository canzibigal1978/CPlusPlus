#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{

     char opc;
    
    /*code*/
    int n1, n2, nota,n3,x;
    string res;

    inicio:
    system("clear");
    
    cout<<"Digite a primeira nota: ";
    cin>>n1;
    cout<<"Digite a segunda nota: ";
    cin>>n2;

    nota=n1+n2;

    // (nota >= 60)?res="Aprovado":res="Reprovado";

    res=(nota>=60)?"Aprovado":"Reprovado";

    cout<<"\nSituação do aluno: " << res << "\n\n";

    x=5;

    cout<<"Digite um valor: ";
    cin>>n3;

    (n3 >= 10) ? x++ : x--;

    cout<<"\nNovo valor de x: " << x << "\n";

    // fim do programa
    cout << "Gostaria de testar novamente?(s/n) ";
    cin >> opc;

    if(opc=='s' or opc=='S'){
        goto inicio;
    }
    return 0;
}
