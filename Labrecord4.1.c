#include <stdio.h>
int square (int n) {
    return n * n;
}
int main () {
    int x = 5;
    printf("Square = %d\n",square(x));
    return 0;
}