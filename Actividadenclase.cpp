#include <iostream> 
using namespace std;
//Algoritmo de soluciÃ³n al Segundo Examen Parcial 2 v.2
//Se calculan las comisiones de venta de 20 empleados y se obtiene el nombre
//del que tuvo menores ventas
int main()
{ 

//Primero definimos las variables
//Definir nombre como string
//Definir ventas_al_mes como real
//Definir comision como real
//Definir menor como string
//Definir ventas_menor como real
//Definir mayor como string
//Definir ventas_mayor como rea
//Definir i como entero



//Como todavÃ­a no usamos arreglos vamos a definir los strings como char por lo pronto
char nombre, menor, mayor;
double ventas_al_mes, comision, ventas_menor, ventas_mayor;
int i; 

//Inicializamos el valor para poder encontrar las ventas  menores
//Lo que queremos es que la primera vez que se compare cualquier dato que den sea menor
//Funciona solamente si ningÃºn vendedor vende 1,000,000 o mÃ¡s
//Las ventas no pueden ser negativas
ventas_menor = 1000000.0;
ventas_mayor = -1000000.0;

//Hacemos el proceso para los 20 empleados
for (i = 1; i<=20; i++) //i++ es ConPaso 1
{
    // Se piden los datos
    cout << "Dame el nombre del vendedor. \n";
    cin >> nombre; 
    cout << "Dame las ventas del vendedor. \n";
    cin >> ventas_al_mes;

    // Se calcula la comisiÃ³n
    if (ventas_al_mes < 2000)
    { 
        comision = 200; 
    }
    else
    { 
        comision = ventas_al_mes*0.15;
    }

    //Se revisa si la venta actual es menor, si lo es hay que actualizar el menor
    if (ventas_menor > ventas_al_mes)  
    {
        ventas_menor = ventas_al_mes;
        menor = nombre;
    }
    if (ventas_mayor < ventas_al_mes)  
    {
        ventas_mayor = ventas_al_mes;
        mayor = nombre;
    }
    //Se despliega el dato de la comisiÃ³n
    cout << "La comision de " <<  nombre << " es " << comision << " \n";
}

//Al final se dice quien tuvo las menores ventas
cout << "La persona con menores ventas es "<< menor << "y su penalizaciodn es de 50 pesos.  \n";
//Al final se dice quien tuvo las mayores ventas
cout << "La persona con menores ventas es "<< mayor << "y su bonificacion es de 300 pesos.  \n";
}