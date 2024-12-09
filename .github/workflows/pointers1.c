#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    printf("Enter first number: ");
    int n1;
    scanf("%d",&n1);
    printf("Enter second number: ");
    int n2;
    scanf("%d",&n2);
    swap(&n1, &n2);
    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);
}
