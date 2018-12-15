#include <iostream>
#include <conio.h>
using namespace std;

struct per{
	char nombre[15];
	int edad;
	float sueldo;
}personas[15];

void leerDatos(int n);
int imprimirDatos(int n);
int main() {
	int n;
	cout << "ingrese el numero de personas:" << endl;
	cin >> n;
	
	leerDatos(n);
	cout << "El numero de empleados con mas de 35 años y con sueldo entre 5000 y 7500 es: "<<imprimirDatos(n);
	return 0;
}
void leerDatos(int n){
	
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout << "\ningrese el nombre de la persona:";
		cin.getline(personas[i].nombre,15,'\n');
		cout << "ingrese edad de la persona:";
		cin >> personas[i].edad;
		cout << "ingrese el sueldo:";
		cin >> personas[i].sueldo;
		cout <<"\n";
		
	}
}
int imprimirDatos(int n){
	int cont=0;
	
	for (int i=0; i<n; i++){
		if ( (personas[i].edad > 35) && ((personas[i].sueldo >= 5000) && (personas[i].sueldo <= 7500) ) ){
			cont++;
		}
	}
	return cont;
}
