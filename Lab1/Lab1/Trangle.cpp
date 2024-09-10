using namespace std;
#include "Trangle.h"
#include <iostream>
#include "math.h"
Trangle::Trangle(int a1, int b1, int c1)
{
    if ((a1 + b1 > c1) && (a1 + c1 > b1) && (b1 + c1 > a1)) {
        set_A(a1);
        set_B(b1);
        set_C(c1);
    }
    else {
        throw "“акой треугольник не может существовать!";
    }
}
        int Trangle::get_A()//свойства дл€ стороны а
        {
            return a;
        }
        void Trangle::set_A(int value)
        {
            if (value > 0)
                a = value;
            else
                throw "—торона должна быть больше 0!";
        }
        int Trangle::get_B()//свойства дл€ стороны b
        {
            return b;
        }
        void Trangle::set_B(int value)
        {
            if (value > 0)
                b = value;
            else
                throw "—торона должна быть больше 0!";
        }
        int Trangle::get_C()//свойства дл€ стороны c
        {
            return b;
        }
        void Trangle::set_C(int value)
        {
            if (value > 0)
                c = value;
            else
                throw "—торона должна быть больше 0!";
        }
        void Trangle::IncreaseByX(int x) //увеличение сторон треугольника в х раз
        {
                a *= x;
                b *= x;
                c *= x;
        }
        void Trangle::DecreaseByX(int x) //уменьшение сторон треугольника в х раз
        {
            if (a / x!=0 || b / x!=0 || c / x!=0) {
                a /= x;
                b /= x;
                c /= x;
            }
            else throw "ѕоделить на это число нельз€. ѕриделение и округление значние выходит 0!";
        }
        int Trangle::Perimetr()//вычисление периметра треугольника
        {
            return a + b + c;
        }
        double Trangle::Square()//вычисление площади треугольника
        {
            double p = (a + b + c) / 2;
            return sqrt(p*(p-(double)a)*(p- (double)b)*(p- (double)c));
        }
        void Trangle::FindingCorners(double* mas) //определение значений углов
        {
            if (a == b == c) {//если равосторонний
                 mas[0] = 45;
                 mas[1] = 45;
                 mas[2] = 45;
            }
            else if (a == b && a != c) //если равнобедренный (а==b)
            {
                mas[0] =cos(c / (2 * a));
                mas[1] = mas[0];
                mas[2] = 180 - mas[0] * 2;
            }
            else if (a == c && b != a) //если равнобедренный (а==с)
            {
                mas[0] = cos(b / (2 * a));
                mas[1] = mas[0];
                mas[2] = 180 - mas[0] * 2;
            }
            else if (c == b && a != c) //если равнобедренный (b==с)
            {
                mas[0] = cos(a / (2 * b));
                mas[1] = mas[0];
                mas[2] = 180 - mas[0] * 2;
            }
            else if (c != b && a != c && a!=b) {
                mas[0] = cos(pow(a,2)+ pow(b, 2)+ pow(c, 2))/2*a*b;
                mas[1] = cos(pow(a, 2) + pow(b, 2) + pow(c, 2)) / 2 * a * c;
                mas[2] = cos(pow(a, 2) + pow(b, 2) + pow(c, 2)) / 2 * c * b;
            }
        }

