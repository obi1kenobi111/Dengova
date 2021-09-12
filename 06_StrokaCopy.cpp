
#include <iostream>
#include <stdio.h> 
#include <string> // для работы со строками
int main()
{
    //Чтобы в консоль выводить слова на рус:
    system("chcp 1251");
    system("cls");
    // setlocale(LC_ALL, "Russian");


//ЗАДАНИЕ 6
    char k[15];
    printf("Введите строку: ");


    gets_s(k); //получаем строку на вводе

    int count = strlen(k);
    printf("Копия строки:  ");
    for (int i = 0; i <= count; i++)
    {
        std::cout << k[i];
    }

    printf("\n");

}