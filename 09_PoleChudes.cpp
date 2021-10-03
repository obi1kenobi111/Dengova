
#include <iostream>
#include <stdio.h>
#include <string>
//Поле чудес
int main()
{
    setlocale(LC_ALL, "Russian");

    char s[50]; //слово
    char d[50];//пробелы
    char c;
    int guess=0;
    int guess_c=0;// угадывание конкретной буквы

    std::cout << "Введите слово на английском: ";
    gets_s(s); //ввод слова

    int count = strlen(s); // число букв в слове
    
    
    for (int i = 0; i < count; i++) 
    {
        d[i] = '-' ;
        std:: cout << d[i];

    }

    printf("\n");

    //Поиск нужной буквы в слове

    while(guess<count) //будем вводить буквы пока число угаданных букв не будет равно количеству букв в исходном слове
    {
        
        std::cout <<"\n Введите букву: \n ";
        std::cin>>c;
        std::cout << " \n ";

            for (int r = 0; r<count ; r++) {//Сравнимаем вводимые числа с исходным массивом и вписываем их в массив дефизов
               
                if (c == s[r]) { 
                    d[r] = s[r];
                    guess++;//счетчик всех угаданных букв
                    guess_c++;//угадали ли мы конкретно эту букву
                }
            }

            if (guess_c > 0) {
                printf("Есть такая буква \n");
            }
            else {
                std::cout << "Нет такой буквы! \n";
            }

            for (int i = 0; i < count; i++) {
                std::cout << d[i];
            }

            guess_c = 0;
    }

    printf(" \n Поздравляю, вы угадали всё слово! \n");
}

