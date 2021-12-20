#include <stdio.h>
int addNumbers(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int sum=addNumbers(num);
    printf("Sum = %d", sum);
    return 0;
}

int addNumbers(int n) {
    if (n != 0){
        printf("%d\n", n);
        return n + addNumbers(n - 1);
        }
    else
        return n;
}
