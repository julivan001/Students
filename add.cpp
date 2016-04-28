#include <iostream>
#include <cstring>
#include <cstdlib>
#include "menu.h"
int add(std::vector<student> &univer)//Функция добавления 
{
    char nomer[10],group[10],name[20],familia[20],otches[20];
    std::cout<<"Номер студенческого билета >> ";
    std::cin>>nomer;
    std::cout<<"Группа студента >> ";
    std::cin>>group;
    std::cout<<"ФИО:\n";
    std::cout<<"Введите фамилию студента >> ";  
    std::cin>>familia;
    std::cout<<"Введите имя студента >> ";
    std::cin>>name;
    std::cout<<"Введите отчество студента >> ";
    std::cin>>otches;
    univer.push_back(student(nomer,group,familia,name,otches));
    char act;
    char predmet[20];
    char teacher[20];
    while(1)
        {
        std::cout<<"\nХотите добавить информацию о предметах?(Y(yes) or N(no))\n";
	std::cout<<"Ввод:";
        std::cin>>act;
        if((act=='n')||(act=='N')) break;
        if((act=='y')||(act=='Y')) 
                {
                std::cout<<"Предмет >> ";
                std::cin>>predmet;
                std::cout<<"Преподаватель >> ";
                std::cin>>teacher;
                if (univer[univer.size()-1].plus_obj(predmet,teacher)==14)
                        {
                        std::cout<<"\nСписок предметов полон. Дальнейшее добавление не возможено.\n";
                        break;
                        }
                }
        }
      system("clear");
    return 0;
}