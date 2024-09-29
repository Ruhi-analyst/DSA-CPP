#include <iostream> // how to access array elements using both array indexing and pointer arithmetic, and how to display the memory addresses of array elements.
using namespace std;
int main() 
{
  
int arr[5] = { 1, 2, 3, 4, 5 };
  
int *ptr;
  
cout << "Displaying address using arrays: " << endl;
  
for (int i = 0; i < 5; ++i)
    
    {
    cout << "&arr[" << i << "] = " << &arr[i] << endl;
    } 
// ptr = &arr[0]
  ptr = arr;			//assigning base address to pointer //Humara array iss memory address se start hota h
  cout << "\nDisplaying address and values using pointers: " << endl;
for (int i = 0; i < 5; ++i) {
    cout << "ptr + " << i << " = " << (ptr + i) << " = " << *(ptr + i) << endl;
}

return 0;

}
