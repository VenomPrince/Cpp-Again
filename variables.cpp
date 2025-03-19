#include <iostream>
using namespace std;

int main() {
    // Variables are containers for storing data values.
    // In C++, there are different types of variables (defined with different keywords), for example:
    // int - stores integers (whole numbers), without decimals, such as 123 or -123
    // double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    // char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    // bool - stores values with two states: true or false
    int a = 5;
    int b = 10;
    int c = a + b;
    bool d = true;
    char e = 'A';
    float f = 3.14;
    double g = 3.14159;
    
    if (d == true){ // if d is true
        cout << "The value of c is: " << c <<", and d is true\n" << endl;
    } else { // if d is false
        cout << "d is false \n" << endl;
    }
    cout << "The sum of a and b is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;
    cout << "The value of f is: " << f << endl;
    cout << "The value of g is: " << g << endl;
    return 0;
    }
    
    