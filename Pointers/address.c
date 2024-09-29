#include <stdio.h>
int main()
{
    int x;
    printf("%d\n",x); // Garbage Value for x
    printf("%d\n",&x); // Decimal address of x; &--> Address operator
    printf("%p\n",&x); // Hexagonal adress of x

    x=10;
    printf("The address: %p\n ", &x);
    printf("The value at address: %p is : %d ", &x,*&x); // * --> Value operator
    

}