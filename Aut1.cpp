#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	
	string non; //nombre del personaje
	int vit = 10; //vida inicial
	int r1, r2, r3, dm, vpd, vf; /*las 3 runas, el daño, la vida actual y
	la vida final*/
	
	cout <<"Ingrese nombre del personaje: " << endl;
	getline(cin, non);
	cout <<"Sus puntos de vida son: " << vit << endl;
	cout << "Ingrese el valor de las 3 runas en un rango del 1 al 10" << endl;
	cout <<"Ingresar primera runa: ", cin >> r1;
	cout <<"Ingresar primera runa: ", cin >> r2;
	cout <<"Ingresar primera runa: ", cin >> r3;
	dm = ((r3 - r1/2) + (r2/2));
	vpd = vit - dm;
	cout <<"Sus puntos de vida actuales son: " << vpd << endl;
	vf = vpd - vit;
	cout <<"Sus puntos de vida finales son: " << vf << endl;
	cout <<"Su personaje sigue vivo?: " << (vf > 0) << endl;
	return 0;
}

