#include <stdio.h>
int add(int a, int b){
    return a + b;
}
void printAdd(int a, int b) {
    printf("Sum = %d\n", a + b);
}
int main (){
    int result = add(3, 4);
    printf("Returned value = %d\n",result);
    printAdd(3, 4);
    return 0;
}