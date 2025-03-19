// These are heades
#include <stdio.h>
#include <iostream>
// Comment using /* */ 
int main(){
    // Using namespace std here so we don't have to write std::cout, std::endl, etc.
    using namespace std;
    // argc is the number of arguments passed to the program
    int argc = 1;
    // printf is a C function, cout is a C++ object
    printf("Hello world!\n");
    // cout is an object of ostream class
    cout << "Hello world!" << "\n" << endl;
    // argc is the variable name, argv is the array of arguments
    cout << "Number of arguments: " << argc << endl;
    // argv[0] is the name of the program
    return 0; // Return 0 to indicate that the program has run successfully
}