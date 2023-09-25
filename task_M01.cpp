//M01 (3б) Используя циклы выведите таблицу Пифагора.
// Она должна быть отформатирована (используйте символ табуляции).
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a;
    for (int i=1;i<10;i++)
    {
        for (int j=1;j<10;j++)
        {
            a=i*j;
            cout.width(3);
            cout<< setiosflags(ios::left)<<a;
        }

        cout<<"\n";
        
    }

    return 0;
}
