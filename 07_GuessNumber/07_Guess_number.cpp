#include <iostream>
#include <stdio.h> 
#include <cmath>

int main()
{
    //ЗАДАНИЕ 7 Дихотомический алгоритм
    setlocale(LC_ALL, "Russian");

    int N = 0;//нижний предел
    int P = 50;
    int i = 0;
    int l;
    int V = 100;//верхний предел
    printf("Загадайте число P от 1 до 100, а я угадаю! \n");

    printf("P больше %d? ( 1 да 2 нет 3 равно) \n ", P);
    std::cin >> l;

    if (l == 1) //N>50 Верхний предел
        P = P + (P + N) / 2;

    else if (l == 2) //N<50 Нижний предел
        P = P - (N + P) / 2;

    else printf("Вы задумали %d!А я покемон! Количество попыток %d, ", N, i);



    while (l != 3)   //пока не введем число 3(угадали число)
    {
        printf("P больше %d? ( 1 да 2 нет 3 равно) \n ", P);

        std::cin >> l;
        //PS ввести верхний и нижний предел(разные переменные между которыми заклюсено число
        if (l == 1) { //N>50 Верхний предел
            N = P;//+
             P = N + (V - N) / 2;

               if (P == 99) P = 100;

        }
           else if (l == 2) 
            {//N<50 Нижний предел
            V = P;//+
            P = P - (V - N) / 2;

           }
            else printf("Вы задумали %d!А я покемон! Количество попыток %d \n, ", P, i + 2);

        i++; //количество попыток
    }


}

