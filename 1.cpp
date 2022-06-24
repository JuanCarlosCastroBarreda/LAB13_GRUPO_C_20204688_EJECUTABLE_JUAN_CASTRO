#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct companero{
	int dia;
	int mes;
	int anio;
	string nombre;
};

void mostrar(companero aux){
    cout<<"El cumpleanios del companiero "<<aux.nombre<<" es este mes, porque nacio el "<<aux.dia<<"/"<<aux.mes<<"/"<<aux.anio<<endl;
}

void cumple(vector<companero>lista){
	for(int i=0;i<lista.size();i++){
        if(lista[i].mes==06 or lista[i].mes==6){
			mostrar(lista[i]);
		}
        else{
            cout<<lista[i].nombre<<" no cumple anios este mes"<<endl;
        }
	}
}

void datos(vector<companero>& lista){

    int d,m,a;
	string nombre;

	cout<<"Ingrese un nombre: ";
    cin>>nombre;
	cout<<"Ingrese su fecha de nacimiento:"<<endl;
	cout<<"Dia: ";
    cin>>d;
	cout<<"Mes: ";
    cin>>m;
	cout<<"Anio: ";
    cin>>a;
	companero aux={d,m,a,nombre};
	lista.push_back(aux);
}

int main(){
	vector<companero> lista;
    int x;
    while(x!=1){
		datos(lista);
        cout<<"1 para terminar, 0 para agregar otro companiero"<<endl;
        cin>>x;
	}
    
	cumple(lista);

	return 0;
}