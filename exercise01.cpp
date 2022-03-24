#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	float marks[] = { 78.4, 90.6, 45.9, 72.2, 54.4 };
	char names[][20] = { "Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha" };

	cout << "No\t";
	cout << setiosflags(ios::fixed) << setw(12) << "Name\t\t" << "Marks" << endl;


	for (int r = 0; r < 5; r++)
	{
		cout << r + 1 << "\t";
		cout << setiosflags(ios::fixed) << setw(10) << setprecision(2) << names[r] << "\t\t";
		cout << marks[r] << endl;
	}
}