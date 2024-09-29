#include <iostream>
using namespace std;

int main() {
    int *p = nullptr;  // Initialize the pointer to null

    if (p != nullptr) {
        cout << "*p = " << *p << "\n";  // This would still be junk, but it will not run due to nullptr
    } else {
        cout << "Pointer is not initialized and cannot be dereferenced.\n";
    }

    cout << "p = " << p << "\n";  // This will print 0 or NULL

    return 0;
}
