#ifndef CIVILIZACION_H_INCLUDED
#define CIVILIZACION_H_INCLUDED
#include <iostream>
#include <iomanip>

using namespace std;

class Civilizacion
{
    string nombre;
    double ubicacionx;
    double ubicaciony;
    float puntuacion;

public:
    Civilizacion();
    Civilizacion(
        const string &Nombre,
        double ubicacionx,
        double ublicaciony,
        float puntuacion);

    void setNombre(const string &v);
    string getNombre();

    void setUbicacionx(double v);
    double getUbicacionx();

    void setUbicaciony(double v);
    double getUblicaciony();

    void setPuntuacion(float v);
    float getPuntuacion();

    friend ostream& operator<<(ostream &out, const Civilizacion &c)
    {
    out << left;
    out << setw(30) << c.nombre;
    out << setw(20) <<c.ubicacionx;
    out << setw(20) <<c.ubicaciony;
    out << setw(20) <<c.puntuacion;
    out << endl;

    return out;
    }

    friend istream& operator>>(istream &in, Civilizacion &c)
    {
    //string temp;
    //float ram;
    //float hdd;

    cout <<"Nombre: ";
    getline(cin, c.nombre);

    cout <<"Ublicacion en X: ";
    cin>>c.ubicacionx;

    cout <<"Ubicacion en Y: ";
    cin>>c.ubicaciony;

    cout <<"Puntuación: ";
    cin>>c.puntuacion;


    return in;
    }

    bool operator==(const Civilizacion& c)
    {
        return nombre == c.nombre;
    }
    bool operator==(const Civilizacion& c) const
    {
        return nombre == c.nombre;
    }
    bool operator<(const Civilizacion& c) const
    {
        return nombre < c.nombre;
    }
};

#endif // COMPUTADORA_H_INCLUDED
