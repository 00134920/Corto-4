#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
/*Crear una función que codifique una letra y devuelva el
número correspondiente según la clave asignada*/
int main(){
    char frase[100];
    char letra[10]={109,117,114,99,105,101,108,97,103,111};
    char num[10]={48,49,50,51,52,53,54,55,56,57};
    int i;
    
    cout << "Escriba la frase a codifica, con guion bajo por espacio" << endl;
    cin >> frase;
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[0]){frase[i]=num[0];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[1]){frase[i]=num[1];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[2]){frase[i]=num[2];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[3]){frase[i]=num[3];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[4]){frase[i]=num[4];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[5]){frase[i]=num[5];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[6]){frase[i]=num[6];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[7]){frase[i]=num[7];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[8]){frase[i]=num[8];}}
    for ( i = 0; i < strlen(frase); i++)
    {if (frase[i]==letra[9]){frase[i]=num[9];}}
    cout << frase << endl;
system ("pause");
return 0;  
}