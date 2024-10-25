#include <stdio.h>

void modifyValue(int *num) {
    *num = 100;
}

int arr [] = {1,2,3};  // Arrays decay to pointers
int *arrptr = arr; 


int main(void) {
    int num = 4;

    int *numPtr = &num;  //& basically gives us the address where a value is stored;

    modifyValue(&num); //modify the num value from 4 to 100

    printf("%d\n", *numPtr); //dereferencing gives us the actual value stored in the address

    int x = 42;
    int* xPTR = &x;   // & gets address, * in declaration
    *xPTR = 43;

    printf("%d\n", arr[0]);  
    printf("%d\n", *arrptr);
    printf("%d\n", x);
}