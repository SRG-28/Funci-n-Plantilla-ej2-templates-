//Codigo sobre una sobrecarga de metodos
//Se realizara una sobrecarga de un metodo que imprimeVector()

#include <iostream>
#include <string>
using namespace std;

// Ahora solo se deja una plantilla de funciones

template<class T>
void imprimeVector(T*, int); //int indica la cantidad de datos del vector

int main() {
	//variable retorno
	int cant = 10;
	cout << "-----Llenar vectores con diferentes tipo de dato-----------" << endl;

	int vec1[10] = { 1,2,3,4,5,6,7,8,9,0 };
	char vec2[10] = { 'a ',' b', 'c ', 'd ', 'e ','f ','g ', 'h ', 'i ', 'j ' };
	double vec3[10] = { 2.3,3.4,5.6,6.7,7.8,8.9,1.2,6.5,3.9,9.1 };
	string vec4[10] = { "El","curso", "de", "progra2", "es", "muy", "bonito",
		"en", "la", "UNA" };

	cout << "---------IMPRIMIR VECTORES------------" << endl;

	cout << "\n\nImprime vector de enteros..." << endl;  imprimeVector(vec1, cant);
	cout << "\n\nImprime vector de char......" << endl;  imprimeVector(vec2, cant);
	cout << "\n\nImprime vector de doubles..." << endl;  imprimeVector(vec3, cant);
	cout << "\n\nImprime vector de string..." << endl;  imprimeVector(vec4, cant);
	cout << endl << endl;

	system("pause");
	return 0;
}

template<class T>
void imprimeVector(T* vec, int can) {
	for(int i = 0; i < can; i++)
		cout << vec[i] << "";

}