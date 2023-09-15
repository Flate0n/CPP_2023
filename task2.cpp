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
    float x,X,y; //инициализация данных
    int j,i;
    bool flag_op=1;
    unsigned long long m;
    cout<<"Enter  X : ";//ввод данных пользователем
    cin>>x;
    i=3;
    X=x;
    y=x;
    while(i<22){//основной цикл функции
        m=1;
        j=1;
        while (j<(i+1)){//цикл для подсчета факториала
            m=m*j;
            j++;
        }
        if (flag_op==0){//флаг для поочередного сложения и вычитания
            X=X+((pow(x,i))/m);
            flag_op=1;  
        }
        else{
            X=X-((pow(x,i))/m);
            flag_op=0;
        }
        i=i+2;
    }
    y=sin(y);//встроенная функция посчета синуса

    cout<<"Built-in function sin(x)= "//вывод данных
        <<resetiosflags(ios::right)<<setw(10)<<y<<"\n"
        <<"My function sin(x)= "
        <<resetiosflags(ios::left)<<setw(16)<<X;

    return 0;
}
