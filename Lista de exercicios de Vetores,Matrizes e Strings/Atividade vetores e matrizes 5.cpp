#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int V1[10],V2[10];

    cout << "PROGRECOES DE VALORES" << endl << endl;
    for (int i=0;i<10;i++){
        cout << "Digite o valor " << i+1 <<": ";
        cin >> V1[i];
    }

    for (int i=0;i<10;i++){
        if(i % 2==0){
            V2[i]= V1[i] * 5;
        }else{
            V2[i]= V1[i] + 5;
        }
    }

    cout << endl <<"Vetor V1: ";
    for(int i=0;i<10;i++){
        cout << "|" << V1[i];
    }
    cout << "|\n";

    cout << "Vetor V2: ";
    for(int i=0;i<10;i++){
        cout << "|" << V2[i];
    }
    cout << "|" << endl;
    system("pause");
    return 0;
}
