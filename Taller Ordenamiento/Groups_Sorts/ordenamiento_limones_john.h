/*****************************************************************//**
 * \file   ordenamiento_limones_john.h
 * \brief  
 * 
 * \author Limones John
 * \date   29/06/2022
 *********************************************************************/

#pragma once
#include <random>
#include <iostream>
#include <regex>
#include <string>

class OrdenamientoLimonesJohn {
public:
    static int generar_aleatorio(int minimo, int maximo) {
        static std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> dis(minimo, maximo);
        return dis(gen);
    }

    static void ordenamiento_limones_john(int* arr, int N)
    {
        for (int gap = N / 2; gap > 0; gap /= 2)
        {
            for (int i = gap; i < N; i += 1)
            {
                int temp = *(arr + i);

                int j;
                for (j = i; j >= gap && *(arr + j - gap) > temp; j -= gap)
                    *(arr + j) = *(arr + j - gap);

                *(arr + j) = temp;
            }
        }
    }

    static int leer_entero(std::string mensaje, int minimo, int maximo) {
        std::regex patron("^(?=.)([+-]?([0-9]*)(\\.([0-9]+))?)$");
        std::string entrada;
        float salida;

        while (true) {
            std::cout << mensaje;
            std::getline(std::cin, entrada);
            entrada = (entrada);

            if (!std::regex_match(entrada, patron)) {
                continue;
            }

            salida = std::stoi(entrada);

            if (salida < minimo || salida > maximo) {
                std::cout << "\n[El numero debe estar entre " << minimo << " y " << maximo << "]" << std::endl;
                continue;
            }

            break;
        }

        return salida;
    }
};