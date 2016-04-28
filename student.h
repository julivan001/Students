#include <vector>
#include <iostream>
class student
{
    char nomer[10];//Номер
    char group[10];//Группа
    char familia[20];//Фамилия
    char name[20];//Имя
    char otches[20];//Отчество
    char predmet[15][20];//Предмет
    char prepodavat[15][20];//Преподаватель
    char mark[15];//Оценка
    public:
    student();//Конструктор без параметров
    student(char nome[],char gru[],char fami[],char nam[],char otche[]);//Конструктор с параметрами
    int perevod(char nome[],char gru[]);//Функция добавления предмета и преподавателя
    int pravka_fio(char fami[],char nam[],char otche[]);//Функция изменения ФИО
    int plus_obj(char pred[],char prep[]);//Функция добавления
    int stav_mark(int index,char marx);//Функция для оценки
    int find_nomer(char nome[]);//Вспомогательная функция 
    int find_group(char gru[]);//Вспомогательная функция
    int find_familia(char fami[]);//Вспомогательная функция
    int find_name(char nam[]);//Вспомогательная функция
    int find_otches(char otche[]);//Вспомогательная функция
    int give_nomer();//Вспомогательная функция
    void show();//Функция показа
    void show_obj();//Функция показа
    int operator > (student univer);//Перегрузка оператора
    friend int v_file(std::ostream &stream, const student &univer);//Вспомогательная функция 
    friend int i_file(std::istream &stream, student &univer);//Вспомогательная функция 
    student &operator = (student univer);//Перегрузка оператора
};