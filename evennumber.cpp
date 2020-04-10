#include <iostream>
using namespace std;

typedef bool test(int);

bool is_even(int a) {
    return a % 2 == 0;
}

int* return_matches(int a[], int &size, test t) {
    int sizeofArr = 0;
    for(int i = 0; i < size; i++)
        if(t(a[i])) sizeofArr++;
    int *p = new int(sizeofArr);
    int count = 0;
    for(int i = 0; i < size; i++)
        if(t(a[i])) p[count++] = a[i];
        
    size = sizeofArr;
    return p;
}

int main() {
    int size = 5;
    int a[] = {32, 245, 634, 53, 235};
    int* arr = return_matches(a, size, is_even);
    for(int i = 0; i < size; i++) cout << *(arr + i) << " ";
    
    return EXIT_SUCCESS;
}
