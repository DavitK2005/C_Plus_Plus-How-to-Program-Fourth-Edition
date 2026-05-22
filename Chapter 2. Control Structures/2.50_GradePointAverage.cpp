/*Modify the program of Fig. 2.22 so that it calculates the grade - point average for the class.A grade of 'A' is worth 4 points, 'B' is worth 3 points, etc.*/

#include < iostream> 

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int grade;
	int aCount = 0;
	int bCount = 0;
	int cCount = 0;
	int dCount = 0;
	int fCount = 0;
	double average{};

	cout << "Enter the letter grades." << endl
		<< "Enter the EOF character to end input." << endl;
	while ((grade = cin.get()) != EOF) {
		switch (grade) {
		case 'A':
		case 'a':
			average += 4;
			++aCount;
			break;
		case 'B':
		case 'b':
			average += 3;
			++bCount;
			break;
		case 'C':
		case 'c':
			average += 2;
			++cCount;
			break;
		case 'D':
		case 'd':
			average += 1;
			++dCount;
			break;
		case 'F':
		case 'f':
			average += 0;
			++fCount;
			break;
		case '\n':
		case '\t':
		case ' ':
			break;
		default:
			cout << "Incorrect letter grade entered."
				<< " Enter a new grade." << endl;
			break;
		}
	}
	cout << "\n\nTotals for each letter grade are:"
		<< "\nA: " << aCount 
		<< "\nB: " << bCount 
		<< "\nC: " << cCount 
		<< "\nD: " << dCount
		<< " \nF: " << fCount
		<< endl;

	cout << "Average grade is: " << average / (aCount + bCount + cCount + dCount + fCount);

	return 0;
}