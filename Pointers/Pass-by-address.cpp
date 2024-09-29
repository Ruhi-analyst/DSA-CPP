// #include <iostream>
// using namespace std;

// void swap(int x, int y){  //No swapping happens becoz we are not doing pass by reference
//     int temp= x;
//     x=y;
//     y=temp;
// }
// int main()
// {
//     int a=100,b=200;
//    cout<<"Before swap: a="<<a<<" and b="<<b<<endl;
//    swap(a,b);
//    cout<<"After swap: a="<<a<<" and b="<<b;
    
//     return 0;
// }

#include <iostream>
using namespace std;

void swap(int &x, int &y){  // doing pass by reference
    int temp= x;
    x=y;
    y=temp;
}
int main()
{
    int a=100,b=200;
   cout<<"Before swap: a="<<a<<" and b="<<b<<endl;
   swap(a,b);
   cout<<"After swap: a="<<a<<" and b="<<b; // Swap actually happens
    
    return 0;
}