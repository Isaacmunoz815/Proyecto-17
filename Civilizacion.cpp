#include "Civilizacion.h"

Civilizacion::Civilizacion(){}
Civilizacion::Civilizacion(
    const string &nombre,
    double ubicacionx,
    double ubicaciony,
    float puntuacion
    )

    {this->nombre = nombre;
     this->ubicacionx = ubicacionx;
     this->ubicaciony= ubicaciony;
     this->puntuacion = puntuacion;}

    void Civilizacion::setNombre(const string &v)
    {nombre = v;}
    string Civilizacion::getNombre(){
    return nombre;
    }

    void Civilizacion::setUbicacionx(double v){
    ubicacionx = v;
    }
    double Civilizacion::getUbicacionx(){
    return ubicacionx;
    }

    void Civilizacion::setUbicaciony(double v){
    ubicaciony = v;}
    double Civilizacion::getUblicaciony(){
    return ubicaciony;
    }

    void Civilizacion::setPuntuacion(float v){
    puntuacion = v;}
    float Civilizacion::getPuntuacion(){
    return puntuacion;
    }

