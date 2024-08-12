#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int produto[5];
    float valor[5],valparcial[5],valtotal;

    cout << "SISTEMA DE COMPRA" << endl <<endl;
    for (int i=0;i<5;i++){
        cout << "Digite a quantidade do produto " << i+1 << ": ";
        cin >> produto[i];
        cout << "Digite o valor do produto " << i+1 << ": ";
        cin >> valor[i];
        valparcial[i] = produto[i] * valor[i];
        valtotal = valtotal + (produto[i] * valor[i]);
    }

    cout << endl << "REGISTRO DE COMPRA" << endl;
    for (int i=0;i<5;i++){
        cout << "ID: " << i << "| Quantidade: " << produto[i] << "| Valor Unitario: R$" << valor[i] << "| valor: R$" << valparcial[i] << "|" << endl;
    }
    cout << "Valor Total: R$" << valtotal << endl << endl;
    system("pause");
    return 0;
}
