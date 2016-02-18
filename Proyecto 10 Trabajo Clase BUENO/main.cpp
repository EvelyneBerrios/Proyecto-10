#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*Generar 10 numero aleatorios presentarlos en la
pantalla, Al final presentar el numero mayor
y el promedio de los 10 numeros
Generar los numros entre 30-80
*/

int main()
{   srand(time(0));
    int i;
    int numero, maxi=0, contar=0, suma=0, promedio=0;
    for (i=1;i<=10;i++)
{    numero =50 + rand() % (100-50);
        cout<<"valor de Numero"<<i<<" es "<<numero<<"\n";
        if(numero>maxi)
{
    maxi=numero;
}
    contar++;
    suma+=numero; //suma = suma + numero
}

   promedio=suma/contar;
   cout<<"Promedio "<<promedio<<"n";
   cout<<"Numero Mayor es "<<maxi<<"\n";


   system("PAUSE");


    return 0;}

