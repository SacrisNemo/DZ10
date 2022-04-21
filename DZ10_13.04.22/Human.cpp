#include "Human.h"

human::human()
{
	surname = " ";
	name = " ";
	midname = " ";
	age = 0;
}

human::human(std::string name, std::string midname, std::string surname, int)
{
	this->name = name;
	this->midname = midname;
	this->surname = surname;
	this->age = age;
}

human::~human()
{
}

student::student() :human()
{
	on_lesson = false;
}

student::student(std::string name, std::string midname, std::string surname, int age, bool on_lesson) : human(name,midname,surname,age)
{
	this->on_lesson = on_lesson;
}

void student::print()
{
	std::cout << "На занятии ли? " << on_lesson;
}

boss::boss() : human()
{
	number_of_workers = 0;
}

boss::boss(std::string name, std::string midname, std::string surname, int age, int number_of_workers) : human(name, midname, surname, age)
{
	this->number_of_workers = number_of_workers;
}

void boss::print() 
{
	std::cout << "Кол-во работников " << number_of_workers;
}

boss::~boss()
{
}


