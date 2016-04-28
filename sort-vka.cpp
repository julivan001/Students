#include <iostream> 
#include <cstring>  
#include <cstdlib>  
#include <vector>   
#include "menu.h"
   
using namespace std;

int sort(vector<student> &univer)//Функция сортировки
{
        student buf;
        int i;
        int flag=0;
        while (1)
        {
        flag=0;
        for(i=0;i<univer.size()-1;i++)   
                if(univer[i]>univer[i+1])
                {
                        buf=univer[i];
                        univer[i]=univer[i+1];
                        univer[i+1]=buf;
                        flag=1;
                }
        if (flag==0) break;
        }
        return 1;
}
