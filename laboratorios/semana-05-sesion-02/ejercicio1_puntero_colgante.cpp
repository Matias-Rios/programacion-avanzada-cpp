#include <iostream>

// TODO: predice antes de compilar. ¿que advertencia esperas que de
// el compilador sobre esta funcion?
//Al ser letura una variable local cuando se termine de ejecutar la funcion, su direccion quedara apuntando a nada siendo un putero colgante
int* obtenerLecturaInsegura(int valorSensor) {
    int lectura = valorSensor * 2;
    return &lectura;
}

int main() {
    int* resultado = obtenerLecturaInsegura(10);
    std::cout << "Lectura (puntero colgante): " << *resultado << std::endl;
    return 0;
}
