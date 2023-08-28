#ifndef PAQUETE_H
#define PAQUETE_H
#include <iostream>
#include <iomanip>
using namespace std;
class Paquete
{
    string id;
    string Origen;
    string Destino;
    string Peso;
    public:
        Paquete();
        Paquete(const string &id, const string &Origen, const string &Destino, const string &Peso);
        //~Paquete();
        void setId(const string &v);
        string getId();
        void setOrigen(const string &v);
        string getOrigen();
        void setDestino(const string &v);
        string getDestino();
        void setPeso(const string &v);
        string getPeso();
        friend ostream& operator<<(ostream &out, const Paquete &p)
        {
            out << left;
            out << setw(11) << p.id;
            out << setw(11) << p.Origen;
            out << setw(11) << p.Destino;
            out << setw(11) << p.Peso;
            out << endl;
            return out;
        }
        friend istream& operator>>(istream &in, Paquete &p)
        {
            string temp;
            cout << "id: ";
            cin.ignore();
            getline(cin, p.id);
            cout << "Origen: ";
            cin.ignore();
            getline(cin, p.Origen);
            cout << "Destino: ";
            cin.ignore();
            getline(cin, p.Destino);
            cout << "Peso: ";
            cin.ignore();
            getline(cin, p.Peso);
            return in;
        }
};

#endif
