#include "student.h"
#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
#include <fstream>
student::student()//Конструктор 
{
    int i;
    for(i=0;i<15;i++)
    mark[i]='0';
}

student::student(char nome[],char gru[],char fami[],char nam[],char otche[])//Конструктор с параметрами
{
    
    strcpy(nomer,nome);    
    strcpy(group,gru);    
    strcpy(familia,fami);
    strcpy(name,nam);
    strcpy(otches,otche);   
    int i,j;
    for(i=0;i<15;i++){
    mark[i]='0';
	for(j=0;j<20;j++)
	{
		predmet[i][j]=0;
		prepodavat[i][j]=0;
	}	
    }
}

int student::stav_mark(int index,char marx)//Функция оценка
{
    if((marx<'1')||(marx>'5')||(index<0)||(index>14)||(mark[index]=='0'))
    return 0;
    mark[index]=marx;
    return 1;    
}
int student::give_nomer()//Возвращаем номер
{
    return atoi(nomer);
}
int student::pravka_fio(char fami[],char nam[],char otche[])//Функция изменения 
{
    strcpy(familia,fami);
    strcpy(name,nam);
    strcpy(otches,otche);
    return 1;
}

int student::perevod(char nome[],char gru[])//Функция для перевода студента 
{
    strcpy(nomer,nome);
    strcpy(group,gru);    
    int i;
    for(i=0;i<15;i++)
    mark[i]=0;
}

int student::plus_obj(char pred[],char prep[])//Функция добавления 
{
    int i;
    int index=-1;
    for(i=0;i<15;i++)
    if(mark[i]=='0')
                {
                index=i;
                break;
                }
    if(index>-1)
        {
        strcpy(predmet[index],pred);
        strcpy(prepodavat[index],prep);
        mark[index]=1;
        return 1;
        }
    else return 0;
}
void student::show()//Функция показа
{
    //std::cout<<"\nNomer       Group       Familia              Name                 Othes\n";
    std::cout<<"___________________________________________________________________________\n";
    std::cout<<std::setw(11)<<std::left<<nomer;
    std::cout<<std::setw(11)<<std::left<<group;
    std::cout<<std::setw(21)<<std::left<<familia;
    std::cout<<std::setw(21)<<std::left<<name;
    std::cout<<std::setw(21)<<std::left<<otches<<std::endl;
}

void student::show_obj()//Функция показа
{
    int i;
    if(mark[0]=='0')
    std::cout<<"\nИнформация о предметах для данного студента не заполнена.\n";
    for(i=0;i<15;i++)
    {
        if(mark[i]=='0') break;
            else
            {
            std::cout<<std::setw(5)<<std::left<<i;
            std::cout<<std::setw(23)<<predmet[i];
            std::cout<<std::setw(23)<<prepodavat[i];
            if(mark[i]==1) std::cout<<"Не cдано"<<std::endl;
                else
                std::cout<<std::setw(5)<<mark[i]<<std::endl;
            }
    }
}

int student::find_nomer(char nome[])//Вспомогательная функция
{
    return(strcmp(nomer,nome));
}

int student::find_group(char gru[])//Вспомогательная функция
{
    return(strcmp(group,gru));
}

int student::find_familia(char fami[])//Вспомогательная функция
{
    return(strcmp(familia,fami));
}

int student::find_name(char nam[])//Вспомогательная функция
{
    return(strcmp(name,nam));
}

int student::find_otches(char otche[])//Вспомогательная функция
{
    return(strcmp(otches,otche));
}

int student::operator > (student univer)//Перегрузка оператора
{
	return (atoi(nomer)>atoi(univer.nomer));
}

student &student::operator = (student univer)//Перегрузка оператора
{
	strcpy(nomer,univer.nomer);
	strcpy(group,univer.group);
	strcpy(familia,univer.familia);
	strcpy(name,univer.name);
	strcpy(otches,univer.otches);
	int i;
	for(i=0;i<15;i++)
	{
	strcpy(predmet[i],univer.predmet[i]);
	strcpy(prepodavat[i],univer.prepodavat[i]);
	mark[i]=univer.mark[i];
	}
	return *this;
}

int i_file(std::istream &stream,student &univer)//Функция для чтения из файла
{
	int i;
	char buf[10];
	for(i=0;i<15;i++)
	{
		stream.getline(univer.predmet[i],100);
		stream.getline(univer.prepodavat[i],100);
		stream.getline(buf,10);
		univer.mark[i]=buf[0];
	}
	stream.getline(univer.nomer,100);
	stream.getline(univer.group,100);
	stream.getline(univer.familia,100);
	stream.getline(univer.name,100);
	stream.getline(univer.otches,100);
	
}

int v_file(std::ostream &stream,const student &univer)//Функция для записи в файл
{
	int i;
	for(i=0;i<15;i++)
	{
		stream<<univer.predmet[i]<<"\n";
		stream<<univer.prepodavat[i]<<"\n";
		stream<<univer.mark[i]<<"\n";
	}
	stream<<univer.nomer<<"\n";
	stream<<univer.group<<"\n";
	stream<<univer.familia<<"\n";
	stream<<univer.name<<"\n";
	stream<<univer.otches;
	
	return 1;
}

