#include <iostream>
#include <string>

using namespace std;

class Animal {
private:
    string tipoAnimal;
    string nombre;
    int numPatas;
    float velocidad;
    string medicion;

public:
    Animal(string tipo, string nombreL, int numPatasL, float velocidadL, string medicionL);
    void mostrarInformacion();
};

class Terrestre : public Animal {
private:
    int numColas;

public:
    Terrestre(string tipo, string nombreL, int numPatasL, float velocidadL, string medicionL, int colas);
    void mostrarInformacionTerrestre();
};

class Acuatico : public Animal {
private:
    string tipoNado;

public:
    Acuatico(string tipo, string nombreL, int numPatasL, float velocidadL, string medicionL, string tipoNadoL);
    void mostrarInformacionAcuatica();
};

class Aereo : public Animal {
private:
    string tipoVuelo;
    int altitudVuelo;
    string medicionAltitud;

public:
    Aereo(string tipo, string nombreL, int numPatasL, float velocidadL, string medicionL, string vuelo, int altitud, string medicionAltitudL);
    void mostrarInformacionAerea();
};

Animal::Animal(string tipo, string nombreL, int numPatasL, float velocidadL, string medicionL) {
    tipoAnimal = tipo;
    nombre = nombreL;
    numPatas = numPatasL;
    velocidad = velocidadL;
    medicion = medicionL;
}

void Animal::mostrarInformacion() {
    cout << tipoAnimal << endl;
    cout << "El nombre del animal es " << nombre << endl;
    cout << "Tiene " << numPatas << " patas" << endl;
    cout << "Se mueve a una velocidad de: " << velocidad << medicion << endl;
}

Terrestre::Terrestre(string tipo, string nombreL, int numPatasL, float velocidadL, string medicionL, int colas)
    : Animal(tipo, nombreL, numPatasL, velocidadL, medicionL) {
    numColas = colas;
}

void Terrestre::mostrarInformacionTerrestre() {
    mostrarInformacion();
    cout << "Tiene " << numColas << " colas" << endl;
}

Acuatico::Acuatico(string tipo, string nombreL, int numPatasL, float velocidadL, string medicionL, string tipoNadoL)
    : Animal(tipo, nombreL, numPatasL, velocidadL, medicionL) {
    tipoNado = tipoNadoL;
}

void Acuatico::mostrarInformacionAcuatica() {
    mostrarInformacion();
    cout << "Nada utilizando " << tipoNado << endl;
}

Aereo::Aereo(string tipo, string nombreL, int numPatasL, float velocidadL, string medicionL, string vuelo, int altitud, string medicionAltitudL)
    : Animal(tipo, nombreL, numPatasL, velocidadL, medicionL) {
    tipoVuelo = vuelo;
    altitudVuelo = altitud;
    medicionAltitud = medicionAltitudL;
}

void Aereo::mostrarInformacionAerea() {
    mostrarInformacion();
    cout << "Vuela utilizando " << tipoVuelo << endl;
    cout << "Vuela a una altitud de: " << altitudVuelo << medicionAltitud << endl;
}

int main() {
    Terrestre gato("Terrestre", "Gato", 4, 15, "km/h", 1);
    gato.mostrarInformacionTerrestre();

    cout << "\n";

    Acuatico delfin("Acuatico", "Delfín", 0, 25, "km/h", "aletas");
    delfin.mostrarInformacionAcuatica();

    cout << "\n";

    Aereo aguila("Aereo", "Águila", 2, 120, "km/h", "alas", 5000, "m");
    aguila.mostrarInformacionAerea();

    return 0;
}
