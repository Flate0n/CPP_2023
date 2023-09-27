/*H01 (5б) Напишите функцию расчета синуса, используя его представление в виде ряда:
Ограничьтесь первыми 10-ю членами ряда. Вычисление должно происходить в цикле.
Рекомендация: используйте величины, вычисленные на предыдущем шаге.
Сравните результат вашей функции с тем, что дает cos из модуля math.h
*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

long long fun_factorial(int N ){

    long long factorial=1;

    for(int j=1;j<=N;j++){

        factorial=factorial*j;
    }

    return factorial;
}
double fun_my_cos(float X){

    //const double pi = 3.141592653589793;
    double num,res;

    for(int n=0;n<10;n++){

        num = ( pow (-1,n) * pow(X,2*n) ) / fun_factorial(2*n);

        res=res + num;
    }
    return res;
}

int main(){
    setlocale(LC_ALL,"RU");
    
    float x;

    cout<<"Введите  X : ";//ввод данных пользователем
    cin>>x;

    cout<<"Built-in function cos(x)= "//вывод данных
        <<resetiosflags(ios::right)<<setw(10)<<cos(x)<<"\n"
        <<"My function cos(x)= "
       <<resetiosflags(ios::left)<<setw(16)<<fun_my_cos(x)<<"\n";
        
    return 0;
}
