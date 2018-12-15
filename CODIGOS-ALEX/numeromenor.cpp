#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char *argv[]) {

	int vector[15];
	int n;
	cout<<"ingrese numero de elemetos: " <<endl;
	cin>>n;
	for(int i=0;i<n;i++) {
		cout<<"ingresar numero: " <<endl;
		cin>>vector[i];
		
		
	}
	int menor=vector[0];
	int pos=0;
   for(int i=1;i<n;i++){
		if(vector[i]<menor){
			menor=vector[i];
			
			pos=i;
			
		}
	}
	cout<<"el numero menor es; "<<menor<<endl;
   cout<<"esta en la posicio: "<< pos <<endl;
	return 0;
}

