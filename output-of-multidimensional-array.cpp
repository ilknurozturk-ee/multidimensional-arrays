#include <iostream>
#include <string>
using namespace std;

int main() {
 string letters[2][2][3] = {
 {
  {"A","B","C"},
  {"D","E","F"}
 },
 {
  {"J","K","L"},
  {"M","N","P"}
 }
};
for (int i=0 ; i<2; i++) {
 for (int j=0; j<2; j++) {
  for (int k=0; k<3; k++) {
  cout << letters[i][j][k] << "\n";
  }
 }
}
return 0;
}
