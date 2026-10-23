#include <iostream>
using namespace std;

int main() {
  int numbers[3][3] = {
  {1, 2, 3},
  {4, 5, 6},
  {7, 8 ,9}
 };
 int x;
 int y;
 cout << "Enter a number between 0-2 for the row: ";
 cin>> x;
 cout << "Now enter a number between 0-2 for the column: ";
 cin>> y;

 cout << "Your chosen number: " << numbers[x][y] << endl;
 return 0;
 }
