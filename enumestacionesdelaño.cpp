#include <iostream>

// Definición del enum
enum estacionesdelanio {
primavera, // 1
verano,    // 2
otonio, // 3
invierno, //4

};

int main() {
   

    // Uso del enum en una estructura de control
    switch ( estacionesdelanio ){
        case primavera:
            std::cout << "primavera es tu estacion favorita." << std::endl;
            break;
        case verano:
            std::cout << "verano es tu estacion favorita." << std::endl;
            break;
        case otonio:
            std::cout << "otonio es tu estacion favorita." << std::endl;
            break;
            case invierno:
                std::cout << "invierno es tu estacion favorita." << std::endl;
                break;
        
    }

    return 0;
}

