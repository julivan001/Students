#include "menu.h"
#include <iostream>
#include <cstdlib>
int show(std::vector<student> &univer)//Функция показа
{
    int i;
    char nomer[10];
    char act;
    std::cout<<"Вы хотите посмотреть:"<<std::endl;
    std::cout<<"1-списке студентов"<<std::endl;
    std::cout<<"2-информацию студенте"<<std::endl;
    std::cout<<"Ввод:";
    std::cin>>act;
    system("clear");
	
    if(act=='1')
        {
	std::cout<<"Nomer       Group       Familia              Name                 Othes\n";
        for(i=0;i<univer.size();i++)
	univer[i].show();
	char w;
	std::cout<<"\nВведите Enter, чтобы продолжить # \n";
	std::cin.get(w);
	std::cin.get(w);
	std::cout<<"\nВведите Enter, чтобы продолжить # \n";
	system("clear");
	return 1;
	}
        
    if(act=='2')
        {
	system("clear");
        std::cout<<"Введите номер студенческого."<<std::endl;
	std::cout<<"Ввод:";
        std::cin>>nomer;
	std::cout<<"\n";
        for(i=0;i<univer.size();i++)
            if(univer[i].find_nomer(nomer)==0)
                {
		system("clear");
                univer[i].show();
                std::cout<<"\n№     lesson                teacher                 mark\n";
	 	std::cout<<"___________________________________________________________________________\n";
                univer[i].show_obj();
                }
		char w;
		std::cout<<"\nВведите Enter, чтобы продолжить # \n";
		std::cin.get(w);
		std::cin.get(w);
		system("clear");
        return 1;
        }
    return 0;
}