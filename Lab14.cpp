#include <iostream>
using namespace std;

// Defining the structure
struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    // Member function to display student information
    void displayStudentInfo() {
        cout << "Student Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Declaring a structure variable
    Student student1;

    // Assigning values to data members
    student1.firstName = "Ali";
    student1.lastName = "Khan";
    student1.rollNumber = 101;
    student1.marks = 87.5;

    // Calling the member function to display student info
    student1.displayStudentInfo();

    return 0;
}

//TASK#2
#include <iostream>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "\nStudent Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    Student students[num]; // Array of structures

    for (int i = 0; i < num; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "First Name: ";
        cin >> students[i].firstName;
        cout << "Last Name: ";
        cin >> students[i].lastName;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << "\nStudent Information:\n";
    for (int i = 0; i < num; i++) {
        students[i].displayStudentInfo();
    }

    return 0;
}

//TASK#3
#include <iostream>
using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "\nStudent Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int num;
    cout << "Enter the number of students: ";
    cin >> num;

    Student* students = new Student[num]; // Dynamic allocation

    for (int i = 0; i < num; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "First Name: ";
        cin >> students[i].firstName;
        cout << "Last Name: ";
        cin >> students[i].lastName;
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;
        cout << "Marks: ";
        cin >> students[i].marks;
    }

    cout << "\nStudent Information:\n";
    for (int i = 0; i < num; i++) {
        students[i].displayStudentInfo();
    }

    delete[] students; // Free allocated memory

    return 0;
}

