#ifndef CAMPO_H
#define CAMPO_H
#include <iostream>
#include <deque>


class Entidad;


class CampoBatalla {
protected:
    std::deque<Entidad> enemigos;
    Entidad heroe;
    int esbirrosDMG //daño recibido por los esbirros

public:
    CampoBatalla(Entidad heroe) ; //El heroe se planta en el campo de batalla en el constructor
    ~CampoBatalla() ; //Destructor
    void esbirroSeAcerca(Entidad esbirro); // Esbirro aparece y se une a la fila de monstruos
    void aparicionSorpresa(Entidad esbirro); //Esbirro aperece sorpresivamente en la cara del heroe
    void batalla(); // Heroe y monstruo mas cercano batallan
    int getNumEnemigos(); // Retorna la cantidad de monstruos que quedan vivos
    Entidad getEsbirroAt(int pos);// Retorna el esbirro en la posicion pos
};

#endif 
