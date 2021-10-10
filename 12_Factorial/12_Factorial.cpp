




#include <iostream>
#include <string>
#include <stdio.h> 

#include <cstdlib> //atoif atoi Функция преобразует строку в значение типа double и int соотв
#include <cstring>

using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    long long int F = 1;//факториал
    char N[256];
    int N_int;
    int k = 0, s = 0;
 
  for (int i = 0; i >= 0; i++) { // может сделать цикл while?

    std::cout << "Введите число N, а я посчитаю его факториальчик ;) : ";
    std::cout << "\n";
    std::cin >> N;

    for (int j = 0; j < strlen(N); j++){  //подсчет количества символов
       if (isdigit(N[j]) == 0 && N[j] != '.' && N[j] != '-') {  
               k++;
       }
    }

    for (int l = 0; l < strlen(N); l++) {  //подсчет количества символов
        if ( N[l] == '.') {
            s++;
        }
    }
    if(k>0||s>1){
    std::cout << "Не вводите символы! Повторите ввод: \n";
    }

    else if (s==1) {
        std::cout << "Число должно быть целочисленным. Повторите ввод: ";
    }

    else {
        N_int = atoi(N);

        if (N_int > 100000 || N_int < 0) {
            std::cout << "Число должно быть меньше 100000 и не меньше 0. ВВедите число еще раз: \n";
        }
        else i = -3;
    
    }

    k = 0;
    s = 0;
  }
  
   
    if (N_int <= 1) {
        std::cout << "Factorial = 1 ";
     }

    else{

      while (N_int > 1)
       {
        F = F * N_int;
        N_int = N_int - 1;
        }
      std::cout << "Factorial = " << F << "\n";
    }
    


}








