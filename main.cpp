// queue::push/pop

#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Contacto.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;

//Escribe los datos del objeto contacto (dado) en un archivo binario con el nombre dado en la posicion dada
//Nota: Se deben poder agregar varios contactos en un solo archivo
void escribir(string nombre_archivo, Contacto*contacto, int posicion)
{//https://github.com/Ceutec/Progra3EjerciciosEnClase/blob/master/2015Examen2-master/main.cpp referencia para este ejercicio
    ofstream out(nombre_archivo.c_str(),ios::in);
    out.seekp(43*posicion);
    out.write(contacto->nombre.c_str(),10);
    out.write(contacto->correo.c_str(),10);
    out.write((char*)&contacto->numero,4);
    out.close();

}

//Devuelve un contacto previamente escrito (con la funcion escribir()) en un archivo binario con nombre dado en la posicion dada
//Nota: Se deben poder leer varios contactos de un solo archivo
Contacto* leer(string nombre_archivo, int posicion)
{//https://github.com/Ceutec/Progra3EjerciciosEnClase/blob/master/2015Examen2-master/main.cpp referencia para este ejercicio
    ifstream in(nombre_archivo.c_str());
    char nombre[10];
    int numero;
    char correo[10];
    in.seekg(43*posicion);
    in.read(nombre,10);
    in.read(correo,10);
    in.read((char*)&numero,4);
    in.close();
    Contacto *c = new Contacto(nombre, correo, numero);
    return c;
}

//Devuelve un vector que contenga todos los nombres de los contactos previamente ingresados en el archivo con nombre dado
vector<string> getNombres(string nombre_archivo)
{
    vector<string>nombres;
    return nombres;
}

//Devuelve true si valor_buscado (dado) se encuentra dentro de mi_cola (dada), de lo contrario devuelve false
bool existe(queue<char> mi_cola, char valor_buscado)
{//https://github.com/mdelcid/clase7/blob/master/main.cpp link de referencia ejercicios realizados en clase
    while(!mi_cola.empty())
        {
            if (mi_cola.front()==valor_buscado)
            return true;
            mi_cola.pop();
        }
        return false;
}

//Devuelve true si valor (dado) existe dentro de mi_set (dado)
bool existe(set<int> mi_set,int valor)
{//https://github.com/mdelcid/clase7/blob/master/main.cpp link de referencia ejercicios realizados en clase
//    set<int>(mi_set);
//    mi_set.insert(10);
    if(mi_set.find(valor)!=mi_set.end())
    return true;
    return false;
}

//Devuelve una lista inversa de mi_lista (dada)
list<double> invertir(list<double>mi_lista)
{
    list<double> invertida;
    return invertida;
}

//Devuelve la cantidad de nodos que contiene un arbol con raiz dada
int contar(NodoBinario* raiz)
{
//    void imprimir ();
//    {
//        imprimir(raiz);
//    }
//    void imprimir(Nodo* raiz)
//    {
//        if(raiz==NULL)
//            return;
//        cout<<raiz->valor<<endl;
//        imprimir(raiz->hijo_izq);
//        imprimir(raiz->hijo_der);
//    }
    return -1;
}

//Cambia todos los valores de un arbol con raiz dada
void cambiarValores(NodoBinario* raiz,int nuevo_valor)
{
//    if(raiz==NULL)
//        return;
//
//    if(raiz->valor==nuevo_valor)
//        raiz->valor=nuevo_valor;
//
//    buscarYReemplazar(raiz->hijo_izq,nuevo_valor, nuevo_valor);
//    buscarYReemplazar(raiz->hijo_der,nuevo_valor, nuevo_valor);
}

int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}

