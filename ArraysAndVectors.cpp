#include <iostream>
#include <string>

int main()
{
	float Grades[5]; // To declare arrays / vectors for late input we must declare its size between brackets. There's no limit for it (theorically).
	float Average = 0;
	std::string StudentName;

	std::cout << "Type the name of the student: ";
	std::getline(std::cin, StudentName) ; // Stores strings that have blankspaces.
	for (int i = 0; i < 5; i++) // Since the arrays start on zero and ends in size - 1, we must obey this pattern for the loop.
	{
		std::cout << "Type grade " << (i + 1) << " : "; // The value of the variable 'i' isn't modified in RAM, just for displaying reasons. 
		std::cin >> Grades[i];
		Average += Grades[i]; // Each grade is summed here to the other. This will be used later to calculate the average of the grades.
		std::cin.ignore(); // Cleans the input buffer.
		system("CLS"); // Clears screen.
	}
	Average = Average / 5; // This is the only thing missing to calculate the average: divide the sum of elements by the amount of them.
	std::cout << StudentName << " has the average of grades of " << Average;
}