#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
    float salarioatual,salarionovo,diferenca;
    char cargo[15];
    char gerente[] = "Gerente";
    char engenheiro[] =  "engenheiro";
    char tecnico[] = "tecnico";

    cout << "CALCULO DE AUMENTO DE SALARIO" << endl << endl;
    cout << "Digite seu salario atual: ";
    cin >> salarioatual;
    cout << "Digite seu Cargo: ";
    fflush(stdin);
    cin.getline(cargo,size(cargo));

    if(strcasecmp(cargo,gerente)==0){
        salarionovo = salarioatual + (0.1 * salarioatual);
    }else if(strcasecmp(cargo,engenheiro)==0){
        salarionovo = salarioatual + (0.2 * salarioatual);
    }else if(strcasecmp(cargo,tecnico)==0){
        salarionovo = salarioatual + (0.3 * salarioatual);
    }else{
        salarionovo = salarioatual + (0.05 * salarioatual);
    }
    diferenca = salarionovo - salarioatual;

    cout << endl << endl << "Salario atual: R$" << salarioatual << endl;
    cout << "Novo salario: R$" << salarionovo << endl;
    cout << "Quantidade do aumento: R$" << diferenca << endl;
    system("pause");
    return 0;
}
