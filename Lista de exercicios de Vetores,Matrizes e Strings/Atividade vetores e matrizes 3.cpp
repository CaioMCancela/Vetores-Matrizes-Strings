#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){
    float notas[5],desvio[5],desvioquadrado[5],somadesvquadrado,soma,media,desviopadrao,varianca;

    cout << "DIARIO DE NOTAS" << endl<< endl;
    for(int i=0;i<5;i++){
        cout << "Digite a nota do aluno com ID " << i << ": ";
        cin >> notas[i];
        soma = soma + notas[i];
    }
    media = soma/5;

    for(int i=0;i<5;i++){
        desvio[i] = notas[i]-media;
        desvioquadrado[i] = pow(desvio[i],2);
        somadesvquadrado = somadesvquadrado + desvioquadrado[i];
    }
    varianca = somadesvquadrado / 5;
    desviopadrao = sqrt(varianca);

    cout << endl << endl <<"Media: "  << media << endl ;
    cout << "Varianca: " << varianca << endl;
    cout << "Desvio Padrao: " << desviopadrao  << endl << endl;
    for(int i=0;i<5;i++){
        cout << "ID: " << i << "| Desvio: " << desvio[i] << "| Desvio padrao ao quadrado: " << desvioquadrado[i] << "|" << endl;
    }
    cout << endl;
    system("pause");
    return 0;
}

