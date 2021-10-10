//Числа Фибоначи
#include <iostream>
#include <string>
#include <stdio.h> 

#include <cstdlib> //atoif atoi Функция преобразует строку в значение типа double и int соотв
#include <cstring>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    long long int F=0;//Число фибоначи
    char N[256];
    int N_int;
    int k = 0, s = 0;

    for (int i = 0; i >= 0; i++) { // может сделать цикл while?

        std::cout << "Введите число N. А я вам выведу первые N чисел Фибоначи : ";
        std::cout << "\n";
        std::cin >> N;

        for (int j = 0; j < strlen(N); j++) {  //подсчет количества символов
            if (isdigit(N[j]) == 0 && N[j] != '.' && N[j] != '-') {
                k++;
            }
        }

        for (int l = 0; l < strlen(N); l++) {  //подсчет количества символов
            if (N[l] == '.') {
                s++;
            }
        }
        if (k > 0 || s > 1) {
            std::cout << "Не вводите символы! Повторите ввод: \n";
        }

        else if (s == 1) {
            std::cout << "Число должно быть целочисленным. Повторите ввод: ";
        }

        else {
            N_int = atoi(N);

            if (N_int > 100 || N_int < 1) {
                std::cout << "Число должно быть меньше 100 и больше или равно 1. ВВедите число еще раз: \n";
            }
            else i = -3;

        }

        k = 0;
        s = 0;
    }

    //Вывод чисел Фибоначи:

    //N_int - число элементов массива
    if (N_int == 1) {
        std::cout << "Число Фибоначи:  0 \n";
    }
    else if (N_int == 2) {
        std::cout << " Числа Фибоначи : \n 0 \n 1 \n";
    }
    else {
        std::cout << "Числа Фибоначи :\n 0 \n 1\n"; //вывод первых двух чисел
        int one = 0;
        int two = 1;
        for (int d = 0; d < N_int-2; d++) {

            F = one + two;
            one = two;
            two = F;

            std::cout << F<<"\n";
        }

    }

    return 0;
}