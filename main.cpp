#include <iostream>
#include "paqueteria.h"
using namespace std;
int main()
{
	Paqueteria pq;
	int op;
	while(true)
	{
		cout << "1) Insertar" << endl;
		cout << "2) Mostrar" << endl;
		cout << "3) Respaldar" << endl;
		cout << "4) Recuperar" << endl;
		cout << "5) Eliminar" << endl;
		cout << "0) Salir" << endl;
		getline(cin, op);
		if(op==1)
		{
			Paquete p;
			cin >> p;
			cin.ignore();
			pq.insertarInicio(p, 0);
        }
		else if(op==2)
		{
			pq.mostrar();
		}
		else if(op==3)
		{
			pq.guardar();
			pq.guardar_tabla();
		}
		else if(op==4)
		{
			pq.recuperar();
		}
		else if(op==5)
		{
			pq.eliminarInicio(0);
		}
		else if(op==0)
		{
			break;
		}
	}
	return 0;
}
