#include "Student.h"

int main()
{
	setlocale(0, "UKR");
	srand(time(0));

	Student s1("����", "�������", "�������");	
	
	s1.PushBackMarks(10);
	s1.Print();

	cout << "\n\n";
}