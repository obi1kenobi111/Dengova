#include <iostream>


class Rectangle {
public:
    const int x1;
    const int x2;
    const int y1;
    const int y2;
    
    Rectangle(int x1_, int y1_, int x2_, int y2_) : x1(x1_),
        y1(y1_), x2(x2_), y2(y2_) {}     //конструктор с параметрами(список инициализации)
};


int main() {

    setlocale(LC_ALL, "Russian");

    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    int a=0, b=0;

    std::cout << "Прямоугольник №1 \n";
    std::cout << "ВВедите координаты ниженго левого угла  и координаты верхнего правого угла: \n";
    std::cin >> x1 >> y1 >> x2 >> y2;

    Rectangle Rect1(x1, y1, x2, y2);

    std::cout << "Прямоугольник №2 \n";
    std::cout << "ВВедите координаты ниженго левого угла  и координаты верхнего правого угла: \n";
    std::cin >> x1 >> y1 >> x2 >> y2;

    Rectangle Rect2(x1, y1, x2, y2);

  
 
    if(Rect1.x1>Rect2.x2)  //левый край первого правее правого края второго
        std::cout << "Прямоугольники не пересекаются";
    else if(Rect2.x1>Rect1.x2) //левый край второго правее правого края первого
        std::cout << "Прямоугольники не пересекаются";
    else if(Rect1.y2<Rect2.y1)//верхний край первого лежит ниже нижнего края второго
        std::cout << "Прямоугольники не пересекаются";
    else if(Rect2.y2<Rect1.x1) //верхний край второго ниже нижнего края первого
        std::cout << "Прямоугольники не пересекаются";
    else std::cout << "Прямоугольники пересекаются";


    

    return 0;
}


