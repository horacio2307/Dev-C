#include <iostream>

using namespace std;

int main(){
	
	char Palabra[]= {'1','2','3','0'};
	int numero=0;
	cout<<Palabra<<endl;
	numero = int(Palabra[0]);
	cout<<numero<<endl;
	numero = int(Palabra[3]);
	cout<<numero<<endl;
	
	return numero;
}
