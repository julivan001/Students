#include "menu.h"
#include <iostream>
#include <cstdlib>

int find(std::vector<student> &univer)//Функция поиска
{
    if(univer.size()==0)
            {
            std::cout<<"Универститеская база студентов пуста. Поис невозможен.\n";
            return 0;
            }
    std::cout<<"Как вы хотите искать?"<<std::endl;
    std::cout<<"1-По номеру студенческого билета?"<<std::endl;
    std::cout<<"2-По группе?"<<std::endl;
    std::cout<<"3-По фамилии?"<<std::endl;
    std::cout<<"4-По имени?"<<std::endl;
    std::cout<<"5-По отчеству?"<<std::endl;
    char act;
    int i,flg_show=0;
    std::cout<<"Ввод:";
    std::cin>>act;
    char lit_buf[10],big_buf[20];
    if((act=='1')||(act=='2'))
        {
	system("clear");
	std::cout<<"Введите >> ";
        std::cin>>lit_buf;
	std::cout<<"\n";
	system("clear");
        for(i=0;i<univer.size();i++)
            {
            if(act=='1') flg_show=univer[i].find_nomer(lit_buf);
            if(act=='2') flg_show=univer[i].find_group(lit_buf);
            if(flg_show==0) univer[i].show();
            }
	char w;
	std::cout<<"\nВведите Enter, чтобы продолжить # ";
	std::cin.get(w);
	std::cin.get(w);
	system("clear");
        return 1;
        }
    if((act=='3')||(act=='4')||(act=='5'))
        {
	system("clear");
	std::cout<<"Введите >> ";
        std::cin>>big_buf;
	std::cout<<"\n";
	system("clear");
        for(i=0;i<univer.size();i++)
            {
            if(act=='3') flg_show=univer[i].find_familia(big_buf);
            if(act=='4') flg_show=univer[i].find_name(big_buf);
            if(act=='5') flg_show=univer[i].find_otches(big_buf);
            if(flg_show==0) univer[i].show();            
            }
	char w;
	std::cout<<"\nВведите Enter, чтобы продолжить # ";
	std::cin.get(w);
	std::cin.get(w);
	system("clear");
        return 1;
        }
}