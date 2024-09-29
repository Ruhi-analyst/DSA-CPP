#include <iostream> 
using namespace std;

struct information {
    int rollno;
    char name;
    char city;
};

struct classes {
    int ID;
    char nameCl;
};

int main() 
{
    struct information s1;
    struct classes s2;
    
    cout << "Roll no: ";
    cin >> s1.rollno;
    
    cout << "Name: ";
    cin >> s1.name;
    
    cout << "City: ";
    cin >> s1.city;
    
    // Corrected output with tab space
    cout << "Roll no.: " << s1.rollno << "\t" 
         << "Name: " << s1.name << "\t" 
         << "City: " << s1.city << endl;

    return 0;
}

// OUTPUT:
// Roll no: 1
// Name: Ruhi
// City: Mumbai

// Roll no.: 1	Name: Ruhi	City: Mumbai