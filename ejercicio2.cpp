#include <iostream>
#include <conio.h>

using namespace std;

struct persona{

char nombre[15];
int edad;
float sueldo;
}personas [15];

void leer (int n);
void imprimir (int n);

int main (){

	/*2.	Escribe el programa en lenguaje C++  que lea nombre, edad y sueldo de quinientas personas 
	y que determine cuántos mayores de 35 años obtuvieron salario comprendido entre $5,000.00 y $7,500.00*/
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
cin.getline(personas[i].nombre,15,'\n');
cout<<"Ingresar edad:";
cin>>personas[i].edad;
cout<<"Ingresar sueldo:";
cin>>personas[i].sueldo;
}

}
void imprimir (int n){

int con=0;

for (int i=0;i<n;i++){

if ((personas[i].edad>35) && (personas[i].sueldo>=5000 && personas[i].sueldo<=7500)){
con++;
}
}
cout<<"Hay "<<con<<" empleados mayores a 35 anios y con salario entre $5000 y $7500";
}
