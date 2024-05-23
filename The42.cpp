// Para poder realizar este codigo analize el problema y vi que necesitaba hacer un bucle que leyera y mostrara números hasta hallar el 42. 
// Por lo que inclui un bucle while que hace eso mismo, y funciona porque se detiene en el momento correcto, tal como lo pide el problema.
#include <iostream>

int main() {
    int numero;
    while (std::cin >> numero) {
        if (numero == 42) {
            break;
        }
        std::cout << numero << std::endl;
    }

    return 0;
}
