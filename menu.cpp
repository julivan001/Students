#include "menu.h"
#include <vector>
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int o_file(vector<student> &univer, char *n_file)//Функция чтения из файла 
{
        ifstream f(n_file, ios_base::in);
        int i=0;
        if(!f)
        {
                return 0;
        }
        while(1)
        {
                if(f.eof()==1)
                        break;
                univer.push_back(student());
                i_file(f,univer[i]);
                i++;
        }
        f.close();
        if(univer.size()==1 && univer[0].give_nomer()==0)
        univer.pop_back();
        return 1;
}


int menu(char *n_file)//Функция меню
{
    system("clear");
    vector<student> univer;
    ifstream f(n_file);
	if(f)
	{
		o_file(univer,n_file);
		if(univer.size()>0)
		cout<<"Информация считана.\n";
		else
		{
			cout<<"Файл был создан ранее, но информация в нем отсутствует.\n";
		}		
	}
	else cout<<"Информации не существет и бедет создана после завершения работы.\n";

    char act;
    while(1)
    {
    
    cout<<"\tМеню:"<<endl;
    cout<<"1-Принять студента"<<endl;
    cout<<"2-Показать информацию о студенте"<<endl;
    cout<<"3-Изменить информацию о студенте"<<endl;
    cout<<"4-Отчислить студента"<<endl;
    cout<<"5-Найти информацию о студенте"<<endl;
    cout<<"0-Выйти"<<endl;
    cout<<"Ввод >> ";
    cin>>act;
    if (act=='0') break;    
    switch(act)
        {
        case '1':system("clear");
	add(univer);sort(univer);break;//Добавление и сортировка
        case '2':system("clear");
	show(univer);break;//Показ
        case '3':system("clear");
	change(univer);sort(univer);break;//Изменение и сортировка
	case '4':system("clear");
	poka(univer);break;//Удаление 
        case '5':system("clear");
        find(univer);break;//Поиск информации
        default:break;
        };    
    }
    r_file(univer,n_file);//Запись в файл
    return 0;    
}