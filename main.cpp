#include <iostream>
using namespace std;

void ordenarBurbuja(int arreglo[], int tamano){
    for (int i = 1; i <tamano; ++i) {
        for (int j = 0; j < tamano-2; ++j) {
            if(arreglo[j] >arreglo[j+1] ){
                int numero_a_Cambiar = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = numero_a_Cambiar;
            }
        }
    }

}

//COMPLEJIDAD DEL ALGORITMO DE ORDENAMIENTO BURBUJA: O(n^2)

// n * (n-1)/2
// n: es el numero de elemento de la lista que se esta ordenando


int main() {
    int numeros_a_ordenar[8] = {4,5,7,8,9,3,1,11};
    int tamanoDelArreglo = sizeof(numeros_a_ordenar)/sizeof (numeros_a_ordenar[0]);

    cout << "Arreglo desordenado" << std::endl;
    for (int i = 0; i < 8; ++i) {
        cout << numeros_a_ordenar[i] << ", " ;
    }

    ordenarBurbuja(numeros_a_ordenar, tamanoDelArreglo);

    cout << std::endl << "arreglo ordenado" << std::endl;
    for (int i = 0; i < 8; ++i) {
        cout << numeros_a_ordenar[i] << ", ";
    }

    return 0;
}
