/*H01 (5б) Напишите функцию расчета синуса, используя его представление в виде ряда:
Ограничьтесь первыми 10-ю членами ряда. Вычисление должно происходить в цикле.
Рекомендация: используйте величины, вычисленные на предыдущем шаге.
Сравните результат вашей функции с тем, что дает sin из модуля math.h
*/
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
    setlocale(LC_ALL,"RU");
    float x,X,y,n; //инициализация данных
    bool flag_op=0;
    int a;
    unsigned long long b;
    const double pi = 3.141592653589793;
    cout<<"Введите  X : ";//ввод данных пользователем
    cin>>x;
    x=x/180*pi;
    a=3;
    X=x;
    y=x;
    for(int i=0;i<10;i++){//основной цикл функции
        b=1;
        for (int j=1;j<=a;j++){//цикл для подсчета факториала
            b=b*j;
        }

        n=pow(x,a)/b;

        if (flag_op==0){//флаг для поочередного сложения и вычитания
            X=X-n;
            flag_op=1;  
        }
        else{
            X=X+n;
            flag_op=0;
        }
        a=a+2;
    }

    y=sin(y);//встроенная функция посчета синуса

    cout<<"Built-in function sin(x)= "//вывод данных
        <<resetiosflags(ios::right)<<setw(10)<<y<<"\n"
        <<"My function sin(x)= "
        <<resetiosflags(ios::left)<<setw(16)<<X<<"\n";

    return 0;
}
