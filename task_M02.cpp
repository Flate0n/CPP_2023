//М02 (4б) Функция принимает два параметра: сторона А и число сторон N,
// и должна вернуть площадь N-угольника со стороной А.

#include <iostream>
#include <cmath>

using namespace std;

double poligon_area(int a, int n){

    const double pi = 3.141592653589793;
    double sqare;

    sqare=(pow(a,2)*n)/(4*tan(pi/n));

    return sqare;
}

int main(){
    setlocale(LC_ALL, "RU");

    int A, N;

    cout<<"Введите длинну ребра A и число сторон N\n"<<"А : ";
    cin>>A;
    cout<<"N : ";
    cin>>N;

    cout<<poligon_area(A, N)<<"\n";

    return 0;
}
