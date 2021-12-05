
#include <iostream>
#include <utility>

template<typename T>
void SortFromTo(T* array, int start, int finish) {
    for (size_t i = start; i < finish; i++)
    {
        for (int j = start; j < finish; ++j) {
            if (array[i] <= array[j]) {
                T tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

void Obmen1(int a, int b, int c) {

    std::cout << " Способ 1: \n";
    c = a;
    a = b;
    b = c;
    std::cout << "a = " << a <<"\n";
    std::cout << "b = " << b<<"\n";
}

void Obmen2(int a,int b) {
    std::cout << " Способ 2: \n";
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
}

void Obmen3(int a, int b) {
    std::cout << " Способ 3: \n";

    std::swap(a, b);

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int end,start = 0, chislo = 0;
    int n = 0;
    int array[100];

    int a = 0, b = 0, c = 0;

    std::cout << "ВВедите число элементов в массиве не большее 100: \n";
    std::cin >> end;
    std::cout << "ВВедите числа, которые нужно отсортировать через пробел: \n";
    while (n < end) {
        std::cin >> chislo;
        array[n] = chislo;
        n++;
    }

    SortFromTo(array, start, end-1);

    for (int i = 0; i < end; i++) {
        std::cout <<array[i]<<"  " ;
    }

 
    /////////////
    std::cout << "ВВедите числа a и b, которые хотите поменять местами \n";
    std::cout << "ВВедите a: \n";
    std::cin >> a;
    std::cout << "ВВедите b: \n";
    std::cin >> b;

    Obmen1(a, b, c);
    Obmen2(a, b);
    Obmen3(a, b);


    
}
