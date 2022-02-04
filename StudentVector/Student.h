#pragma once
#include "Libraries.h"
#include "Date.h"

class Student
{
	char* surname;
	char* name;
	char* patronymic;
	char* adress;
	char* phone;
	vector<int> marks;	
	int counterMarks = 0; 
	vector<int> coursework;		
	int counterCoursework = 0; 
	vector<int> exam;	
	int counterExam = 0; 
	Date d;

public:
	Student(const char* surname, const char* name, const char* patronymic);
	Student(char* surname, char* name, char* patronymic, Date date);
	Student(char* surname, char* name, char* patronymic, Date date, char* adress);
	Student(const char* surname, const char* name, const char* patronymic, Date date, const char* adress, const char* phone);
	Student(const Student& original);

	~Student();

	void SetDate(unsigned short day, unsigned short month, unsigned short year);
	void SetAdress(char* adress);
	void SetPhone(char* phone);
	void SetMark(int value);
	void SetCoursework(int value);
	void SetExam(int value);
	void SetShow(const char* surname, const char* name, const char* patronymic, Date date, const char* adress, const char* phone);

	const char* const GetAdress() const;
	const char* const GetPhone() const;
	const char* const GetSurname() const;
	const char* const GetName() const;
	const char* const GetPatronymic() const;
	void PushBackMarks(int value);
	void PushBackCoursework(int value);
	void PushBackExam(int value);

	vector<int> GetMarks();
	vector<int> GetCoursework();
	vector<int> GetExam();
	
	bool operator > (Student& second);
	bool operator < (Student& second);
	Student& operator += (int marks);
	bool operator == (Student& second);
	bool operator != (Student& second);
	friend ostream& operator<<(ostream& os, Student& original)
	{
		original.Print();
		return os;
	}	
	void Print();

private:
	void SetSurname(char* surname);
	void SetName(char* name);
	void SetPatronymic(char* patronymic);
};
