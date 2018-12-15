#include <iostream>
#include <conio.h>

using namespace std;

struct empleado{
char nombre[15];
int antiguedad;
float sueldo;
}empleados[15];

void leer (int n);
void imprimir (int n);

int main (){
/*3.	Una compañía efectúa cálculos para su reparto anual de utilidades. 
En esta ocasión añadirá un pequeño incentivo de acuerdo a la antigüedad de sus  N empleados. 
Se sabe que la compañía lleva 15 años trabajando y el incentivo consiste en un porcentaje del sueldo de sus trabajadores 
de acuerdo al número de años que llevan trabajando.
La tabla siguiente nos muestra la relación incentivo antigüedad
*/
int n;
cout<<"Ingresar el numero de registros:";
cin>>n;
leer(n);
imprimir(n);

}

void leer (int n){

for (int i=0;i<n;i++){
cout<<"Ingresar nombre:";
fflush(stdin);
cin.getline(empleados[i].nombre,15,'\n');
cout<<"Ingresar antiguedad:";
cin>>empleados[i].antiguedad;
cout<<"Ingresar sueldo:";
cin>>empleados[i].sueldo;
}


}
void imprimir (int n){
float inc;

for (int i=0;i<n;i++){


if (empleados[i].antiguedad<=3){
inc=empleados[i].sueldo*0.01;
cout<<"Nombre:"<<empleados[i].nombre<<" Antiguedad:"<<empleados[i].antiguedad<<" Sueldo:$"<<empleados[i].sueldo<<" Incentivo:$"<<inc<<endl;

}else if (empleados[i].antiguedad<=6){
inc=empleados[i].sueldo*0.03;
cout<<"Nombre:"<<empleados[i].nombre<<" Antiguedad:"<<empleados[i].antiguedad<<" Sueldo:$"<<empleados[i].sueldo<<" Incentivo:$"<<inc<<endl;

}else if (empleados[i].antiguedad<=9){
inc=empleados[i].sueldo*0.05;
cout<<"Nombre:"<<empleados[i].nombre<<" Antiguedad:"<<empleados[i].antiguedad<<" Sueldo:$"<<empleados[i].sueldo<<" Incentivo:$"<<inc<<endl;

}else if (empleados[i].antiguedad>9){
inc=empleados[i].sueldo*0.07;
cout<<"Nombre:"<<empleados[i].nombre<<" Antiguedad:"<<empleados[i].antiguedad<<" Sueldo:$"<<empleados[i].sueldo<<" Incentivo:$"<<inc<<endl;
}



}

}


