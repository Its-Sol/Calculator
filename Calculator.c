/*Get the numbers, create functions to calculate the thins
print the numbers*/

#include <stdio.h>

int main(){
    int first;
    int second;

    printf("Enter the first number: ");
    scanf("%d", &first);
    printf("Enter the second number: ");
    scanf("%d", &second);

    int add(int first, int second);
    int result = first + second;
    printf("%d + %d = %d", first, second, result);
    return result;

    add(first, second);

    return 0;
}