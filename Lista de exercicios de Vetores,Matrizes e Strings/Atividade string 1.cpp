#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
    char nomes[50];
    char mnome[50];
    int i;

    cout << "MENOR NOME" << endl << endl;

    while(true){
        cout << "digite o nome, ou envie linha em branco para cancelar: ";
        fflush(stdin);
        cin.getline(nomes, size(nomes));


        if (strlen(nomes) == 0) {
            break;
        } else if (i == 0) {
            strcpy(mnome, nomes);
        } else if (strcmp(mnome,nomes)>0) {
            strcpy(mnome, nomes);
        }
        i++;
    }

    cout<< endl <<endl << "Menor Nome: " << mnome << endl << endl;
    system("pause");
    return 0;
}