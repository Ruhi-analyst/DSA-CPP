#include <iostream>
using namespace std;

int main()
{
    int arr[5]; // Will get garbage values becoz we didn't initialised
    for (int i=0; i < 5; i++)
    {
        cout<< arr[i]<<" "<< endl;
    }
    
}