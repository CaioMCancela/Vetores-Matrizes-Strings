#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int multiplicacao,M,N;

    cout << "MATRIZES" << endl << endl;
    cout << "Digite a quantidade de linhas: ";
    cin >> M;
    cout << "Digite a quantidade de colunas: ";
    cin >> N;
    cout << "Digite o valor da multiplicacao: ";
    cin >> multiplicacao;

    int matriz[M][N], matriztrasposta[M][N],matriz2[M][N];

    if(M<=20 && N<=25){
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << "Digite o valor da posicao [" << i << "][" << j << "] da matriz: ";
                cin >> matriz[i][j];
            }
        }
        cout << endl;

        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << "Digite o valor da posicao [" << i << "][" << j << "] da matriz 2: ";
                cin >> matriz2[i][j];
            }
        }

        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                matriztrasposta[M-1-i][N-1-j] = matriz[i][j];
            }
        }

        cout  <<endl << "MATRIZ PADRAO" << endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << "|" << matriz[i][j];
            }
            cout << "|" << endl;
        }

        cout  <<endl << "MATRIZ TRANSPOSTA" << endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << "|" << matriztrasposta[i][j];
            }
            cout << "|" << endl;
        }

        cout  <<endl << "MATRIZ MULTIPLICADA" << endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << "|" << multiplicacao * matriz[i][j];
            }
            cout << "|" << endl;
        }

        cout  <<endl << "MATRIZ 2 PADRAO" << endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << "|" << matriz[i][j];
            }
            cout << "|" << endl;
        }

        cout  <<endl << "MATRIZ 1 SOMADA COM MATRIZ 2" << endl;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                cout << "|" << matriz[i][j] + matriz2[i][j];
            }
            cout << "|" << endl;
        }
        cout << endl;

    }else{
        cout << "Matriz muito grande,pofavor tente novamente" << endl << endl;
    }
    system("pause");
    return 0;
}
