/*
3 x 3 grid with numbers that do not repeat (Using GOTO statements)
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   srand(time(NULL));
   int r, c;
   int a[3][3];

   r = -1;
   newrow:r++;
   if(r == 3) goto print;
   c = -1;
   newcol:c++;
   if(c == 3) goto newrow;

   random:a[r][c] = (rand() % 8) + 1;
   if(r == 0 && c == 0) goto newcol;

   //test for repetition
   for(int i = 0; i < 3; i++) {
      for(int j = 0; j < 3; j++) {
         if(i == r && j == c) goto newcol; //if the check loop reaches the maximum.
         else if(a[i][j] == a[r][c]) goto random; //if there is a number in a different cell that is the same.
      }
   }

   print:for(int k = 0; k < 3; k++) {
      for(int l = 0; l < 3; l++) {
         cout << a[k][l] << " ";
      }
      cout << endl;
   }
}
