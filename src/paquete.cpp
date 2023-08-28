#include "paquete.h"
Paquete::Paquete()
{
}
Paquete::Paquete(const string &id,const string &Origen,const string &Destino,const string &Peso)
{
    this->id = id;
    this->Origen = Origen;
    this->Destino = Destino;
    this->Peso = Peso;
}
void Paquete::setId(const string &v){
    id=v;
}
string Paquete::getId(){
    return id;
}
void Paquete::setOrigen(const string &v){
    Origen=v;
}
string Paquete::getOrigen(){
    return Origen;
}
void Paquete::setDestino(const string &v){
    Destino=v;
}
string Paquete::getDestino(){
    return Destino;
}
void Paquete::setPeso(const string &v){
    Peso=v;
}
string Paquete::getPeso(){
    return Peso;
}
