//M08 (4б) Функция get_angle() принимает три числа - длины трех сторон треугольника и возвращает значение угла
// (в градусах), расположенного напротив первой стороны.
//Разрешено использовать обратные тригонометрические функции из библиотеки math.h.
// Введите проверку на корректность значений аргументов (>0).#include <iostream>

#include <iostream>
#include <cmath>

using namespace std;

bool triangle_inequality (int a,int b,int c){ //функция проверки, не из любых 3х сторон треугольник можно собрать))
    if ( ( (a+b) > c ) && ( (b+c) > a ) && ( (c+a) > b ) ) return true;
    else return false;
}

float get_angle (float a, float b, float c){ //функция подсчета угла
    float angle_a;
    const double pi = 3.141592653589793;
    angle_a = acos((b*b+c*c-a*a)/(2*b*c));
    angle_a = angle_a * 180 / pi;
    return angle_a; 
}


int main(){// основная функция
    setlocale(LC_ALL, "RU");

    float A, B, C;

    cout<<"Введите длинну сторон A, B, C\n"<<"А : ";
    cin>>A;
    cout<<"B : ";
    cin>>B;
    cout<<"C : ";
    cin>>C;

    if (triangle_inequality ( A, B, C )){  // проверка правильности введенных данных
        cout<<"Угол противолежащий стороне А равен : "<<get_angle ( A, B, C )<<'\n';

    } 
    else cout<<"Такой треугольник не может существовать 0_о\n";

    return 0;
}