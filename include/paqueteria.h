#ifndef PAQUETERIA_H
#define PAQUETERIA_H
#include "paquete.h"
#include <vector>
class Paqueteria
{
    vector <Paquete> paquetes;
    public:
        Paqueteria();
        void agregar(const Paquete &p);
        void insertarInicio(const Paquete &p, size_t pos);
        void eliminarInicio(size_t pos);
        void mostrar();
        void guardar_tabla();
        void guardar();
        void recuperar();
        size_t size();

        friend Paqueteria& operator<<(Paqueteria &pq, const Paquete &p)
        {
            pq.agregar(p);
            return pq;
        }
};
#endif
