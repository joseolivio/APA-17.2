#include <iostream>

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
}
int main()
{
    cout << "Selection Sort" << endl;
    cout << "Antes de ordenar:" << endl;

    int aray[] = {23,42,4,16,8,15}; //    Printa
    for (int i = 0;i < 6; i++) //           o
        cout << aray[i] << " "; //        array

    SelectionSort(aray,6);

    cout << endl << "Depois de ordenar:" << endl; //     Printa
    for (int i = 0;i < 6; i++) //                          o
        cout << aray[i] << " "; //                       array
    cout << endl;


    return 0;
}
