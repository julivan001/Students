#include "menu.h"
#include <iostream>
#include <cstring>
using namespace std;
int main(int argc,char **argv)
{
	if(argc!=2)
	{
		cout <<"\n";
                cout <<"В КОМАНДНОЙ СТРОКЕ ОБЯЗАЕТЛЬНО ДОЛЖЕН БЫТЬ ЗАДАН ФАЙЛ"<< endl;
                cout <<"\n";
                return 0;
	}
    menu(argv[1]);
}