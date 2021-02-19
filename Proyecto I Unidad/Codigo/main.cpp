#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{

    system("cls");
    bool salir = false;
    while (salir==false){
    
int seleccion;
cout << endl;
    cout <<"          BIENVENIDO  "<< endl << endl;
    cout <<"    *************************"<< endl;
    cout <<"        MENU DE JUEGOS"<< endl;
    cout <<"    *************************"<< endl;
    cout <<"    Seleccione un juego: "<< endl << endl;
    cout <<"    1.Starkship (Nave estelar) "<< endl << endl;
    cout <<"    2.Snake (Serpiente)"<< endl << endl;
    cout <<"    *************************"<< endl;

    cout <<"    Ingrese un numero del menu para seleccionar un juego:   ";
    cin>>seleccion;
    cout<< endl;
    

    if (seleccion==1)
    {
        system("cls");
            cout<< endl;
                starShip();

    } if(seleccion==2){
        system("cls");
            cout<< endl;
                snake();
 
    } else if (salir == false) {
            char continuar = 'n';

            while(true) {
                system("cls");
                cout<< endl;
                cout << "  El numero no se encontro en el menu. " <<endl<<
                        "  Presione s para regresar al menu o "<<
                        "presone n si desea salir:  ";
                cin >> continuar;

                if (continuar == 's' || continuar == 'S') {
                    system ("cls");
                    break;
                    
                } else if (continuar == 'n' || continuar == 'N') {
                    salir = true;
                    system ("cls");
                    break;
                }
            }
        }
    }
        
      return 0;
}
