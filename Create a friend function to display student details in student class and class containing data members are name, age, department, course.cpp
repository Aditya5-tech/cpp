#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    // Constructor to initialize data members
    Student(string n, int a, string dept, string crs)
        : name(n), age(a), department(dept), course(crs) {}

    // Friend function declaration
    friend void displayStudentDetails(const Student &student);
};

// Friend function definition
void displayStudentDetails(const Student &student) {
    cout << "Student Details:" << endl;
    cout << "Name: " << student.name << endl;
    cout << "Age: " << student.age << endl;
    cout << "Department: " << student.department << endl;
    cout << "Course: " << student.course << endl;
}

int main() {
    // Creating a Student object
    Student student1("John Doe", 20, "Computer Science", "B.Tech");

    // Calling the friend function to display details
    displayStudentDetails(student1);

    return 0;
}
