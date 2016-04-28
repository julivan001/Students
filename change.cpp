#include "menu.h"
#include <iostream>
#include <cstdlib>
int change(std::vector<student> &univer)//Функция правки
{
    if(univer.size()==0)
            {
            std::cout<<"\nУниверститеская база студентов пуста. Изменения не возможны.\n";
            return 0;
            }

    int i,index=-1;
    char nomer[10];
    char new_mark,act;
    int index_mark;
    char new_nomer[10];
    char new_group[10];
    char new_familia[20];
    char new_name[20];
    char new_otches[20];
    char predmet[20];
    char prepodavat[20];

   std::cout<<"Введите номер студенческого билета студента >> \n";
   std::cout<<"Ввод:";
   std::cin>>nomer;
   for(i=0;i<univer.size();i++)
      if(univer[i].find_nomer(nomer)==0)
      {
      index=i;
      break;
      }
   system("clear");
   if(index>-1)
   {
   std::cout<<"Что вы хотите сделать?:"<<std::endl;
   std::cout<<"1-Выставить оценки студенту."<<std::endl;
   std::cout<<"2-Исправить ФИО студента."<<std::endl;
   std::cout<<"3-Перевести студента"<<std::endl;
   std::cout<<"4-Добавить информацию о предметах."<<std::endl;
   std::cout<<"Ввод:";
   std::cin>>act;
   system("clear");
      if(act=='2')
      {
    std::cout<<"ФИО:\n";
    std::cout<<"Введите новую фамилию студента >> ";
    std::cin>>new_familia;
    std::cout<<"Введите новое имя студента >> ";
    std::cin>>new_name;
    std::cout<<"Введите новое отчество студента >> ";
    std::cin>>new_otches;
    system("clear");
    char q;
    std::cout<<"Изменения завершены.Вы можете посмотреть.\n\nНажмите Enter, чтобы продолжить #";
    std::cin.get(q);
    std::cin.get(q);
    univer[index].pravka_fio(new_familia,new_name,new_otches);
      }
      if(act=='3')
      {
    std::cout<<"Введите новый номер студенческого билет студента >> ";
    std::cin>>new_nomer;
    std::cout<<"Введите новую группу студента >> ";
    std::cin>>new_group;
    univer[index].perevod(new_nomer,new_group);
      }
      if(act=='4')
      {
    std::cout<<"Введите предмет >> ";
    std::cin.getline(predmet,20);
    std::cin.getline(predmet,20);
    std::cout<<"Введите преподавателя >> ";
    std::cin.getline(prepodavat,20);
    univer[index].plus_obj(predmet,prepodavat);
    system("clear");
      }
      if(act=='1')
      while(1)
      {
      univer[index].show();
      std::cout<<"\n№     lesson                teacher                 mark\n";
      std::cout<<"___________________________________________________________________________\n";
      univer[index].show_obj();
      std::cout<<"\nВыйти (n)"<<"\nПрододжить(y)"<<std::endl;
      std::cout<<"Ввод >> ";
      std::cin>>act;
      if((act=='n')||(act=='N')) break;
      if((act!='y')&&(act!='Y')) continue;
      system("clear");
      univer[index].show_obj();
      std::cout<<"Введите индекс предмета , с которым хотите работать >> \n";
      std::cout<<"Ввод:";
      std::cin>>index_mark;
      std::cout<<"Какую оценку вы хотите поставить студенту?\n";
      std::cout<<"Ввод >> ";
      std::cin>>new_mark;
      system("clear");
      univer[i].stav_mark(index_mark,new_mark);
      }
       univer[index].show();
      std::cout<<"\n№     lesson                teacher                 mark\n";
      std::cout<<"___________________________________________________________________________\n";
      univer[index].show_obj();
      char w;
      std::cout<<"\nВведите Enter, чтобы продолжить # ";
      std::cin.get(w);
      system("clear");      
   return 1;
   }
   else 
         {
         std::cout<<"Student is not finded.\n";
         return 0;
         }
	
      
}