#include "Student.h"

int main()
{
	setlocale(0, "UKR");
	srand(time(0));

	Student s1("Василий", "Васильевич", "Васильев");
	
	s1.AddMark(10);
	s1.AddExam(11);
	s1.AddCoursework(12);
	
	cout << s1 <<"\n\n";
	
	cout << s1 <<"\n\n";
}
