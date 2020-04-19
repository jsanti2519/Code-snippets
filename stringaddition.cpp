/*
Addition of Long Integers using Strings
@author: Jonathan Santiago
April 18th, 2020
*/

#include <iostream>
using namespace std;

string add(string a, string b) {
  int diff = 0;
  if(a.length() > b.length()) {
    diff = a.length() - b.length(); //difference of sizes
    b.insert(0, diff, '0');
  }
  else {
    diff = b.length() - a.length();
    a.insert(0, diff, '0');
  }
  int aNum[100], bNum[100], cNum[100];
  //cNum is equal to sum array
  for(int i = 0; i < a.length(); i++){
    aNum[i] = (int)(a[i]) - 48;
    bNum[i] = (int)(b[i]) - 48;
  }

  //starting from right most digit
  for(int i = a.length() - 1; i >= 1; i--) {
    cNum[i] = aNum[i] + bNum[i];
    if(cNum[i] >= 10) {
      aNum[i - 1] += (cNum[i] / 10);
      cNum[i] = cNum[i] % 10;
    }
  }

  //just in case the left most digit is greater than 9...
  cNum[0] = aNum[0] + bNum[0];

  //convert back to string by concatenation
  string c;
  if(cNum[0] >= 10) c = (char)((cNum[0] / 10) + 48) + (char)((cNum[0] % 10) + 48);
  else c = (char)(cNum[0] + 48);
  for(int i = 1; i < a.length(); i++) c += (char)(cNum[i] + 48);
  
  return c;
}


int main(){
  cout << add("346437585473", "6554247598473625267") << endl;
  cout << add("02", "02") << endl;
  
  return EXIT_ON_SUCCESS;
}
