#ifndef PLAYERS_H
#define PLAYERS_H
#include <iostream>
#include <Entidad.h>
class CampoBatalla;

class Esbirro : public Entidad{
private:
    CampoBatalla field; //Campo en el que la pelea ocurre
    bool isCANO
    void explosionCANO(); //Proceso de division del CANO
public:
	Esbirro(CampoBatalla field); 
	~Esbirro();
    void atacar()
    void recibirDaño(int daño);
    int getLife() ;
    bool isAlive();
    void setATK();
    void setLife();
    void volverCANO();
};

class Heroe: public Entidad{
private:
	int killCounter;
public:
	Heroe(int ATK, int HP);
	~Heroe();
	void atacar()
   	void recibirDaño(int daño);
   	int getLife() ;
   	bool isAlive();
};

#endif 