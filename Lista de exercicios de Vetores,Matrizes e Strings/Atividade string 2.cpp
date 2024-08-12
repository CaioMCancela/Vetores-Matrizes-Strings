#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main() {
    char string1[100];
    char string2[100];
    int tamanho;

    cout << "IMPRESAO DE STRINGS" << endl << endl;
    cout << "Digite a primeira string: ";
    cin.getline(string1,sizeof(string1));
    cout << "Digite a segunda string: ";
    cin.getline(string2,sizeof(string2));

    cout << endl << "Primeira string: " << string1 << endl;
    cout << "Segunda letra da string 1: " << string1[1] << endl;
    cout << endl << "Segunda string: " << string2 << endl;
    tamanho = strlen(string2);
    cout << "Penultima letra da string 1: " << string2[tamanho-2] << endl;
    system("pause");
    return 0;
}