#include <iostream>
#include<Players.h>
#include<Campo.h>
using namespace std;
int main(){
	int aux,aux2
    std::cout<<"Cuantos puntos de vida tiene el mechón?: ";
    cin >> aux
    Heroe mechon = Heroe(2,aux);
    CampoBatalla Olognia = CampoBatalla(mechon);
    std::cout << "Cuantos esbirros enfrentara el guerrero: ";
    std::cin >> aux;
    aux2 = aux;
    while(aux2--){
    	Olognia.esbirroSeAcerca(new Esbirro(Olognia));
    }
    aux2 =aux;
    std::cout << "Vida de los esbirros: ";
    int aux3;
    while(aux2--){
    	cin >> aux3;
    	Olognia.getEsbirroAt(aux-aux2).setLife(aux3);
    }
    aux2=aux;
    while(aux2--){
    	cin >> aux3;
    	Olognia.getEsbirroAt(aux-aux2).setATK(aux3);
    }
    aux2= aux;
    while(aux--){
    	cin >> aux3;
    	if (aux3 == 1){
    			Olognia.getEsbirroAt(aux-aux2).volverCANO();
    	}
    }

    //Empieza la batalla

    while(mechon.isAlive() && Olognia.getNumEnemigos() != 0;){
    	Olognia.batalla();
    }
    cout << Olognia.getEsbirrosDMG() << endl;
    if (Olognia.getNumEnemigos() == 0){
    	cout << "EZ pizi" << endl;
    }
    else{
    	cout << "RIP mechon" << endl;
    }

    return 0;

}