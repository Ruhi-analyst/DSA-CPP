#include<iostream>
using namespace std;

int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i < 3; i++)
    { //i=0
        for (int j = 0; j < 3; j++)
        { // i=0 and j=0
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
};

// Taking input from user 
// #include <iostream>
// using namespace std;

// int main() {
//     int a[3][3];
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cin>> a[i][j];
//         }
//     }
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             cout<< a[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }