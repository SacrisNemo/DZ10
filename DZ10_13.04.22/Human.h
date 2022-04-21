#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include <iostream>

class human
{
public:
	human();
	human(std::string, std::string, std::string, int);
	virtual void print() = 0;
	~human();
private:
	std::string name;
	std::string midname;
	std::string surname;
	int age;

};

class student : public human
{
public:
	student();
	student(std::string,std::string,std::string,int,bool);
	void print() override;

private:
	bool on_lesson;
};

class boss : public human
{
public:
	boss();
	boss(std::string, std::string, std::string, int, int);
	void print() override;
	~boss();
private:
	int number_of_workers;
};

#endif

