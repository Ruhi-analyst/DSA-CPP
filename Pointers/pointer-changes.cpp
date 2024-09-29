#include <iostream> 
using namespace std;
int main() 
{
  int a = 25;
  
  int *p = &a;			//single step declaration and initialisation
  cout << a << " "<<*p<< " ";
  
  a = 45;			//*p also changes 
  cout << a <<  " "<<*p <<" ";
  
  a = 66;
  cout << a <<  " "<<*p<< " ";
  
return 0;

}