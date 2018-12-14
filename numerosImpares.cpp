#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n;
	cout<<"cuantos numero pares quiere:"<<endl;
	cin>>n;
	int i=0;
	int par=0;
	
	do{
		i++;
		par+=2;
		cout<<par<<endl;
		
	} while(i<n);
	
	return 0;
}
