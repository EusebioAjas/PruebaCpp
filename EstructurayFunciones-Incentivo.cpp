#include <iostream>
#include <conio.h>
using namespace std;
struct personas{
	char nombre[15];
	float sueldo;
	int antiguedad;
	float incentivo;
}per[15];

void leer(int n);
void imprimir (int n);
int main() {
	int n;
	cout << "ingrese el numero de empleados:" << endl;
	cin  >> n;
	
	leer(n);
	imprimir (n);
	
	return 0;
}
void leer(int n){
	
	for (int i=0; i<n; i++){
		fflush(stdin);
		cout << "ingrese el nombre del empleado:" <<endl;
		cin.getline(per[i].nombre,15,'\n');
		cout << "ingrese los años de antiguedad:" << endl;
		cin >> per[i].antiguedad;
		cout << "ingrese sueldo:" <<endl;
		cin >> per[i].sueldo;
		
		if (per[i].antiguedad>9){
			per[i].incentivo=(per[i].sueldo * 0.07);
		}else{
			if(per[i].antiguedad>6){
				per[i].incentivo=(per[i].sueldo * 0.05);
			}else{
				if(per[i].antiguedad>3){
					per[i].incentivo=(per[i].sueldo * 0.03);
				}else{
					if(per[i].antiguedad>0){
						per[i].incentivo=(per[i].sueldo * 0.01);
					}
				}
			}
		}
	}
	
}
void imprimir(int n){
	int mayor=per[0].incentivo; int aux;
	int menor=per[0].incentivo; int aux2;
	for (int i=1; i<n; i++){
		if(per[i].incentivo>mayor){
			mayor=per[i].incentivo;
			aux=i;
		}
		if(per[i].incentivo<menor){
			menor=per[i].incentivo;
			aux2=i;
		}
	}
	
	for(int i=0; i<n; i++){
		cout << "\nNOMBRE: " <<per[i].nombre << "\nANTIGUEDAD: " << per[i].antiguedad << "\n" << "SUELDO: " << per[i].sueldo <<"\n" << "INCENTIVO: " << per[i].incentivo;
		cout << "\n";
	}
	
	cout <<"\nEl empleado con mayor incentivo es:";
	cout << "\nNOMBRE: " <<per[aux].nombre << "\nANTIGUEDAD: " << per[aux].antiguedad << "\n" << "SUELDO: " << per[aux].sueldo <<"\n" << "INCENTIVO: " << per[aux].incentivo;

	cout <<"\n\nEl empleado con menor incentivo es:";
	cout << "\nNOMBRE: " <<per[aux2].nombre << "\nANTIGUEDAD: " << per[aux2].antiguedad << "\n" << "SUELDO: " << per[aux2].sueldo <<"\n" << "INCENTIVO: " << per[aux2].incentivo;
}


