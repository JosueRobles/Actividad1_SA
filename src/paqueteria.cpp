#include "paqueteria.h"
#include <fstream>
#include <algorithm>
Paqueteria::Paqueteria(){
}
void Paqueteria::agregar(const Paquete &p)
{
    paquetes.push_back(p);
}
void Paqueteria::insertarInicio(const Paquete &p, size_t pos){
	paquetes.insert(paquetes.begin()+pos,p);
}
size_t Paqueteria::size()
{
	return paquetes.size();
}
void Paqueteria::eliminarInicio(size_t pos){
    paquetes.erase(paquetes.begin()+pos);
}
void Paqueteria::mostrar(){
    cout << left;
    cout << setw(11) << "id";
    cout << setw(11) << "Origen";
    cout << setw(11) << "Destino";
    cout << setw(11) << "Peso";
    cout << endl;
    for(size_t i=0; i<paquetes.size();i++){
        Paquete &p = paquetes[i];
        cout << p;
    }
}
void Paqueteria::guardar_tabla()
{
    ofstream archivo("paquetes_tabla.txt");
    if (archivo.is_open()){
        archivo << left;
        archivo << setw(11) << "id";
        archivo << setw(11) << "Origen";
        archivo << setw(11) << "Destino";
        archivo << setw(11) << "Peso";
        archivo << endl;

        for(size_t i=0; i<paquetes.size();i++){
        Paquete &p = paquetes[i];
        archivo << p;
        }
    }
    archivo.close();
}
void Paqueteria::guardar()
{
    ofstream archivo("paquetes.txt");
    if (archivo.is_open()){
        for(size_t i=0; i<paquetes.size();i++){
        Paquete &p = paquetes[i];
        archivo << p.getId() << endl;
        archivo << p.getOrigen() << endl;
        archivo << p.getDestino() << endl;
        archivo << p.getPeso() << endl;
        }
    }
    archivo.close();
}
void Paqueteria::recuperar()
{
    ifstream archivo("paquetes.txt");
    if(archivo.is_open()){
        string temp;
        Paquete p;
        while(true){
            getline(archivo, temp);
            if(archivo.eof()){
                break;
            }
            p.setId(temp);
            getline(archivo, temp, 'a');
            p.setOrigen(temp);
            getline(archivo, temp);
            p.setDestino(temp);
            getline(archivo, temp);
            p.setPeso(temp);

            agregar(p);
        }
    }
}
