/*
Determinar si una matriz es transpuesta
*/

#include <iostream>
using namespace std;

int main()
{
    int filas, columnas, contador=0, condicion;
    int matriz[30][30];
    int matriz_trans[30][30];

    cout<<"Digite cantidad de filas de la matriz: ";
    cin>>filas;
    cout<<"Digite cantidad de columnas de la matriz: ";
    cin>>columnas;


    // Rellenar matriz
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            cout<<"Digite elemento ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
        }
    }

    // Mostrar matriz
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            cout<<matriz[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    //Mostar trasnpuesta
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            matriz_trans[i][j] = matriz[j][i];
            cout<<matriz_trans[i][j];
        }
        cout<<endl;
    }

    // Checar si matriz normal es igual a transpuesta
    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            if(matriz[i][j] == matriz_trans[i][j])
            {
                contador++;
            }
        }
        cout<<endl;
    }

    condicion = filas*columnas;

    if(contador == condicion)
    {
        cout<<"Las matriz es simetrica!";
    }else
    {
        cout<<"La matriz no es simetrica :(";
    }



    return 0;
}