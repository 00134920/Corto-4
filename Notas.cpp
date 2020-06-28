#include <iostream>
#include <cstdlib>
using namespace std;
/*crear un sistema, para n estudiantes, que lea sus cinco notas; luego calcule la
nota final de acuerdo a la ponderación de cada nota, y la muestre en pantalla junto con
un mensaje indicando si ha aprobado o reprobado*/
int main(){
    int fi,i,j;
    float final[50],suma[50],co[50][5];
    j=0;
    cout << "Ingrese el numero de estudiantes" << endl;
     cin >> fi;
    for (j = 0; j < fi;i++){
     j+=1;
     cout << "Ingrese las notas de estudiante numero " << j << endl;
        for (i = 0; i < 5; i++)
         {cin >> co[j][i];}
     suma[j] = co[j][0]+co[j][1]+co[j][2]+co[j][3]+co[j][4];
     final[j] = suma[j]/5;}
    cout << "Escriba el numero del estudiante a consultar" << endl;
     cin >> j;
    cout << "Las notas son:" << endl;
     for (i = 0; i < 5; i++)
     {cout << co[j][i] << endl;}
    cout << "Su promedio final es:" << endl << final[j] << endl;
     if (final[j] >= 6)
     {cout << "Aprobado" << endl;}
     else
     {cout << "Reprobado" << endl;}
    system ("pause");
    return 0;  
} 