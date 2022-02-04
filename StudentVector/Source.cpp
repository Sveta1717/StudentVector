#include "Student.h"

int main()
{
	setlocale(0, "UKR");
	srand(time(0));

	Student s1("Василий", "Васильевич", "Васильев");

	s1.SetMark(10);
	s1.SetExam(11);
	s1.SetCoursework(12);
	
	cout << s1 <<"\n\n";
}
