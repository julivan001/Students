#include <iostream> 
#include <cstring>  
#include <cstdlib>
#include <fstream>  
#include <vector>   
#include "menu.h"
   
using namespace std;

int r_file(vector<student> &univer, char *n_file)//Функция записи в файл
{
        int i;
        ofstream f(n_file); 
        if (univer.size()>0)
        {
        v_file(f,univer[0]);
                for(i=1;i<univer.size();i++)
                {
                f<<"\n";
                v_file(f,univer[i]);
                }
        }
        f.close();
	system("clear");
        cout<<"Инвормация сохранена в файле :: "<<n_file<<"\n";
}


