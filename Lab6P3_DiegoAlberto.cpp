

#include <iostream>
#include <locale>
#include "Animal.h"
#include "Adoptador.h"
#include "Refugio.h"
#include "Gato.h"
#include "Perro.h"
using namespace std;


// --- Prototipos ---
// Sirve para poder hacer las funciones abajo del main
void mostrarMenuRecursivo();
void ejercicio1();

// Variables globales
vector<Animal*> animales;

// --------------------
// Función principal
// --------------------
int main() {
    setlocale(LC_ALL, "spanish");
    mostrarMenuRecursivo(); // llamada inicial
    return 0;
}

// --------------------
// Menú recursivo principal
// --------------------
void mostrarMenuRecursivo() {
    cout << "==================== MENU PRINCIPAL ====================\n";
    cout << "Seleccione una opcion:\n";
    cout << "1. Gestion, adopcion y cuidado de mascotas\n";
   
    cout << "0. Salir\n";
    cout << "Opcion: ";

    int opcion;
    cin >> opcion;

    switch (opcion) {
    case 1:
        ejercicio1();
        break;
    case 0:
        cout << "Saliendo... Gracias.\n";
        return; // finaliza la recursión
    default:
        cout << "Opcion no valida. Intente de nuevo.\n";
    }



    // Llamada recursiva al menú
    mostrarMenuRecursivo();
}

// --------------------
// Ejercicio 1: 
// --------------------
void ejercicio1() {

    cout << "==================== Que sos ====================\n";
    cout << "Seleccione una opcion:\n";
    cout << "1. Refugio\n";
    cout << "2. Adoptador\n";
   
    cout << "0. Salir\n";
    cout << "Opcion: ";

    int opcion;
    cin >> opcion;

    switch (opcion) {
    case 1:
        
        break;
    case 0:
        cout << "Saliendo... Gracias.\n";
        return; // finaliza la recursión
    default:
        cout << "Opcion no valida. Intente de nuevo.\n";
    }

    mostrarMenuRecursivo();
};

void agremascota1() {

    cout << "==================== MENU PRINCIPAL ====================\n";
    cout << "Seleccione una opcion:\n";
    cout << "1. Añadir perro\n";
    cout << "1. Añadir Gato\n";

    cout << "0. Salir\n";
    cout << "Opcion: ";

    int opcion2;
    cin >> opcion2;

    switch (opcion2) {
    case 1:
        cout << "Nombre\n";
        string nom;
        cin >> nom;
        cout << "edad\n";
        int eda;
        cin >> eda;
       
        cout << "Alimentacon\n";
        int alim;
        cin >> alim;
        cout<<"sexo\n";
        string sex;
        cin >> alim;
        cout << "Felicidad\n";
        int feli;
        cin >> feli;
        cout << "raza\n";
        string raza;
        cin >> alim; 
        cout << "Ladrido\n";
        int ladri;
        cin >> ladri;

        Gato* gato = new Gato(nom,eda,sex,alim,feli,raza,ladri);



        cout << "0. Salir\n";
        cout << "Opcion: ";
    };
}



void refugio() {
    Refugio refu = Refugio(animales);

    cout << "==================== MENU REFUGIO ====================\n";
    cout << "Seleccione una opcion:\n";
    cout << "1. Añadir animal\n";
    cout << "2. Ver animales\n";
    cout << "3. Dar en adopcion\n";

    cout << "0. Salir\n";
    cout << "Opcion: ";

    int opcion;
    cin >> opcion;

    switch (opcion) {
    case 1:
        agremascota1();
            break;
    case 2:

        case 0:
            cout << "Saliendo... Gracias.\n";
            return; // finaliza la recursión
        default:
            cout << "Opcion no valida. Intente de nuevo.\n";
        } cout << "==================== MENU PRINCIPAL ====================\n";


    }

