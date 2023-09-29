/*X01 (10б) Функция queen_hit() получает два строчных (string)
 значения - номера шахматных клеток и должна вернуть true, если ферзь, стоя на первой клетке, угрожает второй.
  В противном случае возвращается false;

cout << queen_hit("e2", "e4"); // 1
cout << queen_hit("e2", "f4"); // 0
cout << queen_hit("a1", "c3"); // 1
cout << queen_hit("h8", "a1"); // 1

Eсли введены некорректные значения, функция предупреждает об этом:

cout << queen_hit("8e", "a1"); // Error, 0
cout << queen_hit("a8", "q1"); // Error, 0
*/
#include <iostream>
#include <math.h>
using namespace std;



string queen_hit(string l,string n){

    string litter []={"a","b","c","d","e","f","g","h"};
    string number []={"1","2","3","4","5","6","7","8"};
    string  chess_board [8][8];

    string  location[8][8];
    int I,J,xx,yy,x,y,sxy,sji,syx,sij;
	bool flag_litter=0, flag_number=0, flag_main=0;

	for(int i=7;i>-1;i--){
        for(int j=0;j<8;j++){

            chess_board[i][j]=litter[j]+number[i];

			if (l==chess_board[i][j]){
                x=j;
                y=i;
                flag_litter=1;
            }
            else if (n==chess_board[i][j])
            {
                xx=i;
                yy=j;
                flag_number=1; 
            }
        }
    } 

    if (flag_number==0 || flag_litter==0)return "ERROR";

    for(I=7;I>-1;I--){
        for(J=0;J<8;J++){

      sji=J-I;
      sxy=x-y;
      sij=I+J;
      syx=y+x;

            location[I][J]="00";

            if(I==y||J==x||sxy==sji||syx==sij)location[I][J]="xx";
            if(I==y&&J==x)location[I][J]="xx";
            if(location[xx][yy]=="xx")flag_main=1;
        }
    } 

    if ( flag_litter==1 && flag_number==1 && flag_main==1)return "1";
	else return "0";
        
}

int main(){
	string X,Y;
	cout<<"Введите свой ход \n"<<"Текущее положение фигуры : ";
	cin>>X;
	cout<<"конечное положение фигуры : ";
	cin>>Y;
	cout<<queen_hit(X,Y)<<"\n";
	
	return 0;
}