#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int vetor[5],i,soma =0;

    cout << "PROGRAMA SOMA DE VETOR" << endl << endl;
    for(i=0;i<5;i++){
        cout << "Digite o " << i+1 << " numero: ";
        cin >> vetor[i];
        if(vetor[i]%2==1){
            soma = soma + vetor[i];
        }
    }
    cout << "\nSoma dos numeros impares: " << soma << endl;
    system ("pause");
    return 0;
}
