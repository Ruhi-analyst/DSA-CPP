#include <iostream> 
#include<string>
using namespace std;

struct information { // Pointer: (->) operator ; Simple: (.) operator
    int rollno;
    string name;
    string city;
};

int main() 
{
    struct information *s1ptr, s1; //s1ptr: pointer pointing to struct information
    s1ptr=&s1; //Storing address s1 variable to s1ptr pointer
   
    
    cout << "Roll no: ";
    cin >> s1ptr->rollno;
    
    cout << "Name: ";
    cin >> s1ptr->name;
    
    cout << "City: ";
    cin >> s1ptr->city;
    
    cout<<endl;
    
    // Corrected output with tab space
    cout << "Roll no.: " << s1ptr->rollno << "\t" 
         << "Name: " << s1ptr->name << "\t" 
         << "City: " << s1ptr->city << endl;

    return 0;
}
