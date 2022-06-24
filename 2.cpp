#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct alumno{
    string nombre;
	string grupo;
	int fase1;
	int fase2;
    int fase3;
    int p_final;
};

void nota(vector<alumno> aux){
	int prom;
	for(int i=0;i<aux.size();i++){
		prom=aux[i].fase1*0.15+aux[i].fase2*0.2+aux[i].fase3*0.25+aux[i].p_final*0.4;
		cout<<"El promedio del Alummno "<<aux[i].nombre<<" del grupo "<<aux[i].grupo<<": "<<prom<<endl<<endl;
	}
}

void datos(vector<alumno>& lista){
    string nombre, grupo;
	int f_1, f_2, f_3, p_f;
    cout<<"El alummno ";
    cin>>nombre;
    cout<<"Esta en el grupo(A,B,C) ";
    cin>>grupo;
    cout<<"Su nota de la primera fase es ";
    cin>>f_1;
    cout<<"Su nota de la segunda fase es ";
    cin>>f_2;
    cout<<"Su nota de la tercera fase es ";
    cin>>f_3;
    cout<<"Y su nota del proyecto final fase es ";
    cin>>p_f;
    alumno aux={nombre,grupo,f_1,f_2,f_3,p_f};
    lista.push_back(aux);
}
int main(){
	vector<alumno>lista;
	int x;
    while(x!=1){
		datos(lista);
        cout<<"1 para terminar, 0 para agregar otro alumno"<<endl;
        cin>>x;
	}
    nota(lista);

	return 0;
}