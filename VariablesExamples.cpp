#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    string name;
    srand(time(0));
    int age;
    int ages[5] = {20, 21, 22, 23, 24};
    age = ages[rand() % 5];
    char grade;
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};
    grade = grades[rand() % 5];
    float gpa;
    float gpas[5] = {4.0, 3.5, 3.0, 2.5, 2.0};

    if (grade == 'A') {
        do {
            gpa = gpas[rand() % 5]; // Randomly select a GPA from the array
        } while (gpa < 4.0); // Keep selecting a GPA until it is greater than or equal to 4.0
    } else if (grade == 'B') {
        do {
            gpa = gpas[rand() % 5]; // Randomly select a GPA from the array
        } while (gpa < 3.0 || gpa >= 3.5); // Keep selecting a GPA until it is greater than or equal to 3.0 and less than 3.5
    } else if (grade == 'C') {
        do {
            gpa = gpas[rand() % 5];// Randomly select a GPA from the array
        } while (gpa < 2.5 || gpa >= 3.0);// Keep selecting a GPA until it is greater than or equal to 2.5 and less than 3.0
    } else if (grade == 'D') {
        do {
            gpa = gpas[rand() % 5];// Randomly select a GPA from the array
        } while (gpa < 2.0 || gpa >= 2.5);// Keep selecting a GPA until it is greater than or equal to 2.0 and less than 2.5
    } else {
        do {
            gpa = gpas[rand() % 5];// Randomly select a GPA from the array
        } while (gpa >= 2.0);// Keep selecting a GPA until it is less than 2.0
    }

    cout << "Enter your name: ";
    cin >> name;
    cout << "Results: " << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;
    cout << "GPA: " << gpa << endl;

    if (grade == 'A') {
        cout << "You have over 90% in all your courses" << endl;
    } else if (grade == 'B') {
        cout << "You have over 80% in all your courses" << endl;
    } else if (grade == 'C') {
        cout << "You have over 70% in all your courses" << endl;
    } else if (grade == 'D') {
        cout << "You have over 60% in all your courses" << endl;
    } else {
        cout << "You have less than 60% in all your courses" << endl;
    }

    // You can also use switch statements instead of if-else statements
    switch (grade) {
        case 'A':
            cout << "You have over 90% in all your courses" << endl;
            break;
        case 'B':
            cout << "You have over 80% in all your courses" << endl;
            break;
        case 'C':
            cout << "You have over 70% in all your courses" << endl;
            break;
        case 'D':
            cout << "You have over 60% in all your courses" << endl;
            break;
        default:
            cout << "You have less than 60% in all your courses" << endl;
            break;
    }

    return 0;
}