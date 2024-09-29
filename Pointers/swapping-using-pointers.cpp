#include <iostream>
using namespace std;

void swap(int *x, int *y){  // swapping doing pass by pointers--> Using derefernce operator *.... we are taking values
    int temp= *x;
    *x=*y;
    *y=temp;
}
int main()
{
    int a=100,b=200;
   cout<<"Before swap: a="<<a<<" and b="<<b<<endl;
   swap(&a,&b); //Swapping memory locations of a and b
   cout<<"After swap: a="<<a<<" and b="<<b;
    
    return 0;
}