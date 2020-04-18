#include <iostream>
using namespace std;

typedef bool level(int, int);

bool ascending(int a, int b) {
  return a > b;
}

bool descending(int a, int b) {
  return a < b;
}

void sort(int a[], int size, level f) {
  bool flag = true;
  int i, j;
  for(i = 1; i <= size && flag; i++){
    flag = false; //assuming everything is sorted correctly
    for(j = 0; j < size - 1; j++)
      if(f(a[j], a[j + 1])){
        temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        flag = true; //there has been a swap.
      }
  }
  return;
}    


int main() {
  int a[5] = {2, 5, 4, 3, 2};
  sort(a, 5, descending);
  for(int i = 0; i < 5; i++) cout << a[i] << " ";
  
  return EXIT_SUCCESS;
}
}
