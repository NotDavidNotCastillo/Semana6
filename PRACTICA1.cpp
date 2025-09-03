#include <iostream>
#include <iomanip>
using namespace std;

void ordenamientoSeleccion(int * const, const int);
void intercambiar(int * const, int * const); 

int main(){
	const int tamanioArreglo = 10;
	int a[tamanioArreglo]={9,8,7,6,5,4,3,2,1,10};

	cout<<"Orden original\n";

	for(int i =0; i < tamanioArreglo; i++) {
		cout<< setw(4) << a[i];
	}

	ordenamientoSeleccion(a, tamanioArreglo);

	cout<<"\nElementos de datos en orden ascendente\n";

	for(int x=0; x < tamanioArreglo; x++){
		cout<< setw(4) <<a[x];
	}

	cout<<endl;
	return 0;
}

void ordenamientoSeleccion(int * const arreglo, const int tamanio){
	int menor;
	for(int i=0; i<tamanio-1 ; i ++){
		menor=i;
	}
}
void intercambiar(int * const, int * const){

}