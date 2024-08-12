#include <iostream>
#include <cstdlib>
#include<cstring>

using namespace std;

int main(){
    char frase[100];
    int tamanho=0,contador=0;

    cout << "TROCA DE A POR B" << endl << endl;
    cout << "Digite a string: ";
    cin.getline(frase,sizeof(frase));
    tamanho = strlen(frase);

    for(int i=0;i<tamanho;i++){
        if(frase[i]=='a'){
            frase[i] = 'b';
            contador++;
        }
    }

    cout << endl <<endl << "Frase modificada: " << frase << endl;
    cout << "Quantidade de letra modificadas: " << contador << endl <<endl;
    system ("pause");
    return 0;
}
