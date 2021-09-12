
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
    std::cout<<"Введите ваше имя:";
    gets_s(k);
    std::cout <<"Привет,"<<k<<"!";

    gets_s(k); //получаем строку на вводе

    
}
