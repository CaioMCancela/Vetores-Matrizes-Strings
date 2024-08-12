#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int quantidade,maior[2]={0,0},soma=0;

    cout << "VETORES" << endl << endl;
    cout << "Digite a quantidade de numeros no vetor: ";
    cin >> quantidade;

    int valor[quantidade];

    if(quantidade<= 10){
        for(int i=0;i<quantidade;i++){
            cout << "Insira o numero da posicao "<< i << " do vetor: ";
            cin >> valor[i];
        }

        for(int i=0;i<quantidade;i++){
            if(maior[0]<valor[i]){
                maior[1] = maior[0];
                maior[0] = valor[i];
            }else if(maior[1]<valor[i]){
                maior[1] = valor[i];
            }

            if(i%2==1){
                soma = soma + valor[i];
            }
        }

        cout << endl << "maiores valores sao: "<<maior[1] << "e" << maior[0] << "." << endl;
        cout << "Soma de Valores de posicao impar: "<< soma << endl;
    }else{
        cout << "Quantidade invalida. Por favor, tente novamente."<< endl;
    }
    system("pause");
    return 0;
}

