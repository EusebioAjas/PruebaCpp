#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	int vector[25];
	int n;
	cout<<"ingrese numero de elementos"<<endl;
	cin>>n;
	//siempre hay que inicializar en este caso la (i)
	for(int i=0;i<n;i++){
		cout<<"ingrese un numero: ";
	    cin>>vector[i];
	}
	int acum=0;
	int cont=0;
	float prom;
	for (int i=0;i<n;i++){
		if(i%2==0 && vector[i]%2!=0){
			acum+=vector[i];
			cont++;
			
		}
	}
	prom=acum/cont;
	
	cout<<"el promedio es: "<<prom<<endl;
}
