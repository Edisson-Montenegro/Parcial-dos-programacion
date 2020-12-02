#include <iostream>
#include <string>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct estudiante
{
	string nombre;
	int edad;
	int id;
	int semestre;
};


int main(int argc, char** argv) 
{
	estudiante E;
	E.nombre="Edisson Montenegro";
	E.id=57563;
	E.edad=20;
	E.semestre=4;
	
	cout<<"el nombre del estudiante es "<<E.nombre<<endl;
	cout<<"la identificacion del estudiante es "<<E.id<<endl;
	cout<<"la edad del estudiante es "<<E.edad<<endl;
	cout<<"el semestre en el que esta el estudiante es "<<E.semestre<<endl;
	
	
	
	
	return 0;
}
