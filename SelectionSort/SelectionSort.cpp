#include <iostream>
#include <fstream>
#include <stdlib.h>


using namespace std;


void SelectionSort(int a[],int n) {
    int min, i, j;

    for(i = 0; i < (n-1) ; i++)
    {
        min = i;
        for( j = (i+1) ; j < n ; j++)
        {
            if(a[j]<a[min])
                min = j;
        }
        if(min!=i)
        {
            swap(a[min],a[i]);
        }

    }
        cout << endl << "Depois de ordenar:" << endl; //     Printa
    for (int i = 0;i < n-1; i++) //                          o
        cout << a[i] << " "; //                       array
    cout << endl;
}
int main()
{
    char arquivo[100];
    cout << "Insira o nome do arquivo: " << endl;
    cin >> arquivo;

    int i = 0;
    int aray[100000];

        ifstream MeuArquivodeLeitura;
        MeuArquivodeLeitura.open(arquivo);
        char saida[1000];
        if (MeuArquivodeLeitura.is_open()) {
            while (!MeuArquivodeLeitura.eof()) {

                MeuArquivodeLeitura >> saida;
                aray[i] = atoi(saida);
                i++;


            }
        }

        MeuArquivodeLeitura.close();


        SelectionSort(aray, i);


    return 0;
}