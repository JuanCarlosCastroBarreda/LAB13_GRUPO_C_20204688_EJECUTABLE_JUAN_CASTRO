#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct jugador{
	string nombre;
	float talla;
	int edad;
};

void mostrar(vector<jugador> aux){
	for(int i=0;i<aux.size();i++){
		cout<<"Nombre: "<<aux[i].nombre<<"\n";
		cout<<"Su talla es: "<<aux[i].talla<<endl;
		cout<<"Su edad es: "<<aux[i].edad<<endl;
	}
}
void calificado(vector<jugador> aux){
	cout<<"Los que cumplen los requisitos son: \n";
	vector<jugador> lista;
	for(int i=0;i<aux.size();i++){
		if(aux[i].edad<20 and aux[i].talla>1.70){
			lista.push_back(aux[i]);
		}
	}
	mostrar(lista);
}

void ingresar(vector<jugador>& lista){
	string a;
	float b;
	int c;
	cout<<"Ingrese nombre del jugador: ";
    cin>>a;
	cout<<"Ingrese la edad: ";
    cin>>c;
	cout<<"Ingrese talla: ";
    cin>>b;
    
	jugador aux={a,b,c};
	lista.push_back(aux);
}


int main(){
	vector<jugador>lista;
	int x;
    while(x!=1){
		ingresar(lista);
        cout<<"1 para terminar, 0 para agregar otro jugador"<<endl;
        cin>>x;
	}
    calificado(lista);

	return 0;
}