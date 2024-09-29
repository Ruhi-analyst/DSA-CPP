#include <stdio.h>
int main()
{
int x=10;
int* ptr1;
int* *ptr2;

ptr1=&x;
ptr2=&ptr1;

printf("%d\n",x);
printf("%d\n",&x);
printf("%d\n",ptr1);
printf("%d\n",*ptr1);
printf("%d\n",ptr2);
printf("%d\n",*ptr2);
printf("%d\n",**ptr2);
}