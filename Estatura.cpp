#include <iostream>
#include <cstdlib>
using namespace std;
/*Calcule el promedio de estatura de una clase de 25 alumnos. Decir cuantos se encuentran
arriba de la media y cuantos debajo de la media.*/
int main(){
    int estatura[25],me,ma,i,suma,prom;
    suma = 0;
    me = 0;
    ma = 0;

    cout << "Ingrese las estaturas" << endl;
    for (i = 0; i < 25; i++)
    {
        cin >> estatura[i];
    }
    for (i = 0; i < 25; i++)
    {
        suma += estatura[i];
    }
    prom = suma/25;
    cout << "La media de altura: " << prom << endl;

    for (i = 0; i < 25; i++)
    {
        if (estatura[i]<prom)
        {
            me += 1;
        }
        if (estatura[i]>prom)
        {
            ma += 1;
        }
    }
    cout << "Los alumnos por debajo de la media son: " << me << endl;
    cout << "Los alumnos por encima de la media son: " << ma << endl;
    system ("pause");
    return 0;  
}