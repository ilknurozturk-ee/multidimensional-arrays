#include <iostream>
using namespace std;

int main() {
  int mynumbers[2][1][3]= {
   {
    {1,2,3}
   },
 {
  {4,5,6}
 }
};

mynumbers[0][0][0] = 7;

for(int i=0; i<2; i++) {
 for(int j=0; j<1; j++){
  for(int k=0; k<3; k++){
        cout << mynumbers[i][j][k] << endl;
   }
 }
}

 return 0;
 }
