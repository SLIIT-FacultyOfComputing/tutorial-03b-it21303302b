#include <iostream>
using namespace std;
int main() {
 float marks[] = {78.4, 90.6, 45.9, 72.2, 54.4};
 char names[][20] = {"Ajith", "Wimal", "Kanthi", "Suranji", "Kushmitha"};
 cout << "No\t" << "Name\t\t" << "Marks" << endl;
 for (int r = 0; r < 5; r++) {
     cout <<  r+1 << "\t"
          <<  names[r]<<"\t\t"
          << marks[r] << endl;
 }
}