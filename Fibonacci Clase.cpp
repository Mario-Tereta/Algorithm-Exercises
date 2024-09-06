#include <iostream>

int main() {
    int n;
    std::cout << "Ingrese la cantidad de términos de la secuencia de Fibonacci que desea ver: ";
    std::cin >> n;
	int i = 1;
    int a = 4, b = 3, siguiente;

    std::cout << "Secuencia de Fibonacci: ";

    while (i <= n) {
        if (i == 1) {
            std::cout << a << " ";
        } else if (i == 2) {
            std::cout << b << " ";
        } else {
            siguiente = a + b;
            a = b;
            b = siguiente;
            std::cout << siguiente << " ";
        }
        i++;
    }

    std::cout << std::endl;
    return 0;
}
