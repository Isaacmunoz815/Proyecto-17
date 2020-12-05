#include <iostream>
#include "Videogame.h"
using namespace std;

int main (){
    Videogame v;
    string op;
    string nombredeUsuario;

    while (true)
        {   cout << "..........CIVILIZACIONES............";
        cout << endl << endl;
        cout << "Nombre de Usuario: "<<v.getNombredeUsuario();
        cout << endl << endl;
        cout << "1) Nombre de Usuario: "<<endl;
        cout << "2) Agregar Civilizacion" << endl;
        cout << "3) Mostrar" << endl;
        cout << "4) Respaldar" << endl;
        cout << "5) Recuperar" << endl;
        cout << "6) Insertar" << endl;
        cout << "7) Inicializar" << endl;
        cout << "8) Eliminar" << endl;
        cout << "9) Ordenar" << endl;
        cout << "10) Ordenar por Nombre" << endl;
        cout << "11) Ordenar por Ubicacion X" << endl;
        cout << "12) Ordenar por Ubicacion Y" << endl;
        cout << "13) Ordenar por Puntuacion" << endl;
        cout << "14) Buscar" << endl;
        cout << "15) Modificar" << endl;
        cout << "0) Salir" << endl;
        cout << endl << endl;
        cout << "Opcion: ";
        getline(cin, op);

        if (op == "1")
        {
            system ("cls");
            cout << "Escribe un nombre de usuario:"<<endl;
            getline(cin, nombredeUsuario);

            v.setNombredeUsuario(nombredeUsuario);
            system ("Pause");
            system("cls");
        }
        if(op == "2")
        {
            system("CLS");
            Civilizacion c;
            cin>>c;
            v.agregarCivilizacion(c);
            cin.ignore();

            system ("PAUSE");
            system("CLS");
        }
        else if (op == "3")
        {
            system("CLS");
            v.mostrar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "4")
        {
            system("CLS");
            v.respaldar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "5")
        {
            system("CLS");
            v.recuperar();

            system ("PAUSE");
            system("CLS");
        }
        else if(op == "6")
        {
            system("CLS");
            Civilizacion c;
            cin>>c;

            size_t pos;
            cout << "posicion: ";
            cin>>pos; cin.ignore();

            if(pos >= v.size())
            {
                cout << "Posición no valida" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else
            {
                v.insertar(c, pos);
                system ("PAUSE");
                system("CLS");
            }
        }
        else if(op == "7")
        {
            system("CLS");
            Civilizacion c;
            cin>>c;

            size_t n;

            cout << "n: ";
            cin>> n; cin.ignore();

            v.inicializar(c, n);
            system ("PAUSE");
            system("CLS");

        }
        else if(op == "8")
        {
            system("CLS");
            size_t pos;
            cout << "posicion: ";
            cin>>pos; cin.ignore();

            if(pos >= v.size())
            {
                cout << "Posición no valida" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else
            {
                v.eliminar(pos);
                system ("PAUSE");
                system("CLS");
            }
        }
        else if(op == "9")
        {
            system("CLS");
            v.ordenar();
            system ("PAUSE");
            system("CLS");
        }
         else if(op == "10")
        {
            v.ordenarNombre();
        }
        else if(op == "11")
        {
            v.ordenarUbicacionx();
        }
        else if(op == "12")
        {
            v.ordenarUbicaciony();
        }
        else if(op == "13")
        {
            v.ordenarPuntuacion();
        }
        else if(op == "14")
        {
            system("CLS");
            Civilizacion c;
            cin>>c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);

            if(ptr == nullptr)
            {
                cout << "No encontrado" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else
            {
                cout << *ptr << endl;
                system ("PAUSE");
                system("CLS");
            }
        }
        else if(op == "0")
        {
            break;
        }
        else if(op == "15")
        {
            fflush(stdin);
            system("CLS");
            Civilizacion c;
            cin>>c; cin.ignore();

            Civilizacion *ptr = v.buscar(c);

            if(ptr == nullptr)
            {
                cout << "No encontrado" << endl;
                system ("PAUSE");
                system("CLS");
            }
            else
            {
                cout << "Civilizacion encontrada";
                fflush(stdin);
                system("CLS");

                cout << "Escribe el nuevo nombre de la civilizacion: "<<endl;
                v.modificarNombre(*ptr);
                cout << "Escribe la nueva ubicacion X de la civilizacion: "<<endl;
                v.modificarUbicacionx(*ptr);
                cout << "Escribe la nueva ubicacion y de la civilizacion: "<<endl;
                v.modificarUbicaciony(*ptr);
                cout << "Escribe la nueva puntuacion de la civilizacion: "<<endl;
                v.modificarPuntuacion(*ptr);

                system("PAUSE");
                system("CLS");
            }
        }


    }

    return 0;
}
