#include <iostream>
using namespace std;
#include "BrazoRobotico.h"

int main () {
	double x, y, z; //Variables de las coordenadas
	cout << "Comenzamos creando una instancia de la clase BrazoRobotico" << endl;
	BrazoRobotico BrazoDeJesus = BrazoRobotico ();
	cout << "Escribimos las variables de coordenadas" << endl;
	cout << "Introduce x" << endl; cin >> x ;
	cout << "Introduce y" << endl; cin >> y ;
	cout << "Introduce z" << endl; cin >> z ;
	BrazoDeJesus.mover (x,y,z);
	BrazoDeJesus.coger();
	if (BrazoDeJesus.get_estaSujetando() == true) {
		cout << "Ha cogido el objeto con eficacia" << endl;
	}
	else {
		cout << "Error al coger el objeto" << endl;
	}
};
	

