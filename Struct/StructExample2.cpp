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
    struct information s1,s2; //Student1-> s1; Student2 -> s2
    
    cout << "Roll no for s1 : ";
    cin >> s1.rollno;
    
    cout << "Name for s1 : ";
    cin >> s1.name;
    
    cout << "City for s1 : ";
    cin >> s1.city;

    cout << "Roll no for s2 : ";
    cin >> s2.rollno;
    
    cout << "Name for s2 : ";
    cin >> s2.name;
    
    cout << "City for s2 : ";
    cin >> s2.city;
    
    // Corrected output with tab space
    cout << "Roll no. for s1 : " << s1.rollno << "\t" 
         << "Name for s1 : " << s1.name << "\t" 
         << "City for s1 : " << s1.city << endl;
         
    cout<<endl;
    
    cout << "Roll no. for s2 : " << s2.rollno << "\t" 
         << "Name for s2 : " << s2.name << "\t" 
         << "City for s2 : " << s2.city << endl;

    return 0;
}

// OUTPUT:
// Roll no for s1 : 1
// Name for s1 : Ruhi
// City for s1 : Mumbai
// Roll no for s2 : 2
// Name for s2 : Aryan
// City for s2 : Faridabad
// Roll no. for s1 : 1	Name for s1 : Ruhi	City for s1 : Mumbai
// Roll no. for s2 : 2	Name for s2 : Aryan	City for s2 : Faridabad