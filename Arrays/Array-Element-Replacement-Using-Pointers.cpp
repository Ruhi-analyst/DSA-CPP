#include <iostream> 
using namespace std;

void myFunc(int *arr,int size) // Pass by Pointers
{
    for(int i=0;i<size;i++)
    {
    if(*(arr+i)==4) //Array element replacement
    *(arr+i)=0;
    }
}

int main() 
{
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"The size is: "<<n<<endl;
    
    myFunc(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
 
  
return 0;

}

// also u can use  this:

// void myFunc(int arr[],int size)
// {
//     for(int i=0;i<size;i++)
//     {
//     if(arr[i]==4)
//     arr[i]=0;
//     }
// }

// void myFunc(int *arr,int size)
// {
//     for(int i=0;i<size;i++)
//     {
//     if(arr[i]==4)
//     arr[i]=0;
//     }
// }
