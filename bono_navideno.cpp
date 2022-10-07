#include <iostream>

int main()
    {
        int tiempo = 0, sueldo = 0;
        float bono = 0;

        std::cout << "ingrese los a" << char(164) << "os trabajados:\n";
        std::cin >> tiempo;

        std::cout << "ingrese el sueldo:\n";
        std::cin >> sueldo;

        if (tiempo > 4 || sueldo < 2000)
           {
           bono = 0.25 * sueldo;
           }
        else
           {
           bono = 0.20 * sueldo;
           }
        std::cout << "El bono navide" << char(164) << "o es de: " << bono;

        return 0;


    }