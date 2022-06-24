#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct empleado{
	string nombre;
	char sexo;
	float sueldo;
};

void datos(vector<empleado> aux){
	for(int i=0;i<aux.size();i++){
		cout<<"El sueldo de "<<aux[i].nombre<<" es "<<aux[i].sueldo<<endl;
	}
}

void sueldos(vector<empleado> &_lista){
	for(int i=0;i>_lista.size();i++){
		empleado aux1;
		if(_lista[i].sueldo>_lista[i+1].sueldo){
			aux1=_lista[i];
			_lista[i]=_lista[i+1];
			_lista[i+1]=aux1;
		}
	}	
}
void ingresar(vector<empleado>& lista){
	string a;
	char b;
	float c;
	cout<<"Ingrese nombre del empleado: ";
    cin>>a;
	cout<<"Ingrese sexo del empleado (Hombre o Mujer (H/M) ): ";
    cin>>b;
	cout<<"Ingrese Sueldo ";
    cin>>c;
	empleado aux={a,b,c};
	lista.push_back(aux);
	
	
}

int main(){
	vector<empleado>lista;
	int x;
    while(x!=1){
		ingresar(lista);
        cout<<"1 para terminar, 0 para agregar otro empleado"<<endl;
        cin>>x;
	}
    sueldos(lista);
    datos(lista);

	return 0;
}