#include "student.h"
#include <vector>

int add(std::vector<student> &univer);//Функция добавления 
int change(std::vector<student> &univer);//Функция правка
int find(std::vector<student> &univer);//Функция поиска
int show(std::vector<student> &univer);//Функция показа
int sort(std::vector<student> &univer);//Функция сортировки
int r_file(std::vector<student> &univer, char *n_file);//Функция записи в файл
bool poka(std::vector<student> &univer);//Функция удаления
int menu(char *n_file);//Функция меню
