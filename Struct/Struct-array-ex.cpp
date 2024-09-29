#include <iostream> 
#include <string>
using namespace std;

struct information {
    int rollno;
    string name;
    string city;
};



int main() 
{
    struct information student[1000];
    int i,n;
    cout<<"Enter Total Number of students : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"For Student "<<i+1<<":"<<endl;
        cout<<"Roll no.: ";
        cin>>student[i].rollno;
        cout<<"Name: ";
        cin>>student[i].name;
        cout<<"City: ";
        cin>>student[i].city;
    }
    cout<<endl;
     for(i=0;i<n;i++)
    {
        cout<<"For Student "<<i+1<<":"<<endl;
        cout<<"Roll no.: ";
        cout<<student[i].rollno<<"\t";
        cout<<"Name: ";
        cout<<student[i].name<<"\t";
        cout<<"City: ";
        cout<<student[i].city<<"\t";
        cout<<endl;
    }   
    }