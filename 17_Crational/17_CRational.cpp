#include <iostream>

int gcd(int a, int b) {  //НОД
    if (a == 0 && b != 0)
        return b;
    if (b == 0 && a != 0)
        return a;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

class Rational {
public:
    const int numerator; //числитель
    const int denominator;//знаменатель

    //~Rational(); деструктор исп когда надо уничтожить каждый обьект этого класс
    Rational() : numerator(0), denominator(1) {} //конструктор по умолчанию для возможности создавть обтекты 0 и 1 значения по умолчанию
    Rational(int numerator_, int denominator_) : numerator(numerator_ / gcd(numerator_, denominator_)),
        denominator(denominator_ / gcd(numerator_, denominator_)) {}     //конструктор с параметрами(список инициализации)
};

//перегрузка операторов
Rational operator + (const Rational& lhs, const Rational& rhs) {
    return { lhs.numerator * rhs.denominator + lhs.denominator * rhs.numerator,lhs.denominator * rhs.denominator };
}

Rational operator - (const Rational& lhs, const Rational& rhs) { //для класса переопределяем операцию вычитания
    return { lhs.numerator * rhs.denominator - lhs.numerator * rhs.denominator,lhs.denominator * rhs.denominator }; //вызвается конструктор для параметров  left and right hand side (l - tmp1 r=tmp2)
}

Rational operator * (const Rational& lhs, const Rational& rhs) {
    return { lhs.numerator * rhs.numerator,lhs.denominator * rhs.denominator };
}

Rational operator / (const Rational& lhs, const Rational& rhs) {
    return { lhs.numerator * rhs.denominator,lhs.denominator * rhs.numerator };
}

//переопределение оператора вывода чтобы выводить проще(сразу классы)
std::ostream& operator << (std::ostream& ostream, const Rational& rational) {
    return ostream << rational.numerator << " / " << rational.denominator << std::endl;
}

int main() {
    //std::cin>>a>>b;
    // Rational tmp3(a,b);

    Rational tmp1(100, 40);
    Rational tmp2(100, 40);


    std::cout << tmp2.numerator;//использование геттера для получения данных это и есть тот же геттер
    std::cout << tmp1 + tmp2;
    std::cout << tmp1 - tmp2;
    std::cout << tmp1 * tmp2;
    std::cout << tmp1 / tmp2;
    return 0;
}
