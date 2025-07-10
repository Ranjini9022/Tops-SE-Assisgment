/* 6. Introduction to Object-Oriented Programming
3. Inheritance Example
Write a program that implements inheritance using a base class Person and derived classes Student and Teacher. Demonstrate reusability through inheritance.*/


#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void setDetails(string n, int a) {
        name = n;
        age = a;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class: Student
class Student : public Person {
private:
    string studentID;

public:
    void setStudentDetails(string n, int a, string id) {
        setDetails(n, a);       // Reusing Person's function
        studentID = id;
    }

    void displayStudent() const {
        cout << "--- Student Details ---" << endl;
        display();               // Reusing Person's display function
        cout << "Student ID: " << studentID << endl;
    }
};

// Derived class: Teacher
class Teacher : public Person {
private:
    string subject;

public:
    void setTeacherDetails(string n, int a, string subj) {
        setDetails(n, a);       // Reusing Person's function
        subject = subj;
    }

    void displayTeacher() const {
        cout << "--- Teacher Details ---" << endl;
        display();               // Reusing Person's display function
        cout << "Subject: " << subject << endl;
    }
};

int main() {
    // Create Student object
    Student s;
    s.setStudentDetails("Alice", 20, "S123");
    s.displayStudent();

    cout << endl;

    // Create Teacher object
    Teacher t;
    t.setTeacherDetails("Mr. John", 45, "Mathematics");
    t.displayTeacher();

    return 0;
}

