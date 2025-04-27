#ifndef ENTIDAD_H
#define ENTIDAD_H
#include <iostream>

class Entidad {
protected:
    int LifePoints;
    int TotalLifePoints;
    int Atk;

public:
    virtual void atacar(Entidad entidad) = 0;
    virtual void recibirDaño(int daño) = 0;
    virtual int getLife() = 0 ;
    virtual bool isAlive() = 0 ;
    
};

#endif // ENTIDAD_H
