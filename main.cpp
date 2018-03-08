#include <iostream>

using namespace std;

void InsertionSort(int a[], int n){
    int i,j,elemento;

    for(i=1;i<n;i++){        // vamos iterar por todos os elementos exceto o primeiro
        elemento = a[i];         // representa o numero que estamos movendo na parcela ordenada
        j = i;                   // nosso índice na parcela não ordenada
        /* Vamos iterar da direita para a esquerda <-- na parcela ordenada,
         * vamos parar quando o elemento a esquerda de nossa posicão for menor
         * que o elemento que estamos inserindo */
        while(j>0 && a[j-1] > elemento) {
            a[j] = a[j-1]; // Movendo cada elemento que encontramos para a direita, abrindo espaço.
            j = j - 1; // atualizando nosso contador para continuar a mover-se a esquerda.
        }
        a[j] = elemento; // inserimos o elemento na posicão da parcela ordenada
    }
}
int main()
{
    cout << "Insertion Sort" << endl;
    cout << "Antes de ordenar:" << endl;

    int aray[] = {23,42,4,16,8,15}; //    Printa
    for (int i = 0;i < 6; i++) //           o
        cout << aray[i] << " "; //        array

    InsertionSort(aray,6);

    cout << endl << "Depois de ordenar:" << endl; //     Printa
    for (int i = 0;i < 6; i++) //                          o
        cout << aray[i] << " "; //                       array
    cout << endl;


    return 0;
}
