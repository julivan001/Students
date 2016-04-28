#include <iostream> 
#include <cstring>  
#include <cstdlib>  
#include <vector>   
#include "menu.h"
   
using namespace std;

bool poka(vector<student> &univer)//Функция удаления 
{
        bool kont =false;
        string tmp;
        int i,nom, index=-1;
        cout<<"Кого из сдутентов вы хотите отчислить. Введите номер студенческого билета.\n";
        std::cout<<"Ввод >> ";
        cin>>nom;
        if(cin.fail())
        {
                cin.clear();
                getline(cin,tmp);
                cout<<"Номер студенческого билета задается числом.";
        }
 
        for(i=0;i<univer.size();i++)
        {
                if(univer[i].give_nomer()==nom)
                {
                        kont=true; 
                        cout<<endl;
                        index=i;   
                        break;
                }
        }

        if(index!=-1)
        {
                for(i=index;i<univer.size();i++)
                {
                        univer[i]=univer[i+1];
                        univer.pop_back();
		}
	cout <<"Студент | "<<nom<< " | отчислен.\n";
	char w;
	cout<<"\nНажмите Enter, чтобы продолжить # ";
	cin.get(w);
	cin.get(w);
	system("clear");
        }

        if(!kont){ 
	cout <<"Такого студента нет.\n";
	char w1;
	cout<<"\nНажмите Enter, чтобы продолжить # ";
	cin.get(w1);
	cin.get(w1);
	system("clear");
	return true;
        }
	

	
	
}
