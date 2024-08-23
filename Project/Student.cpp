#include "Student.h"
#include<iostream>
#include<string>
#include<vector>

using namespace std;

string Student::getName() {
    string value;
    cout << "Enter the name: ";
    cin >> value;
    return value;
}

void Student::setName(string value) {
    name = value;
}

void Student::setAge() {
    int val;
    cout << "Enter the age: ";
    cin >> val;
    while(val < 0 || val > 100) {
        cout << "Invalid age, renter the age(0 - 100): ";
        cin >> val;
    }
    age = val;
}

void Student::giveGroup() {
    string gr;
    cout << "Enter the group: ";
    cin >> gr;
    group = gr;
}

vector<int> Student::enterGrades() {
    vector<int> grades;
    int num;
    cout << "Enter the number of grades: ";
    cin >> num;
    cout << "Enter " << num << " grades: ";
    for(int i{0}; i < num; i++) {
        int grade{0};
        cin >> grade;
        while(grade < 0 || grade > 10) {
            cout << "Invalid grade. Renter the grade(0 - 10): ";
            cin >> grade;
        }
        grades.push_back(grade);
    }
    return grades;
}

double Student::finalGrade(vector<int>& grades) {
    int sum{0};
    int count{0};
    for(auto grade : grades) {
        sum += grade;
        count++;
    }
    finGrade = static_cast<double>(sum) / count;
    return finGrade;
}

void Student::sayHello() {
    cout << "Hello!" << endl;
}

void Student::displayStudent() {
    sayHello();
    cout << "My name is: " << name << endl;
    cout << "My age is: " << age << endl;
    cout << "My group is: " << group << endl;
    cout << "My final grade is: " << finGrade << endl;
    cout << endl;
}

Student* Student::createStudent() {
    Student* newStudent = new Student;
    string name = newStudent->getName();
    newStudent->setName(name);
    newStudent->setAge();
    newStudent->giveGroup();
    vector<int> grades = newStudent->enterGrades();
    newStudent->finalGrade(grades);
    return newStudent;
}

int Student::partition(vector<Student*>& students, int l, int h) {
    Student* pivot = students.at(l);
    int i{l}, j{h};
    while(i < j) {
        while(i <= h && students.at(i)->name <= pivot->name) i++;
        while(j >= l && students.at(j)->name > pivot->name) j--;
        if(i < j) {
            swap(students.at(i), students.at(j));
        }
    }
    swap(students.at(l), students.at(j));
    return j;
}

void Student::quickSort(vector<Student*>& students, int l, int h) {
    if(l < h) {
        int j = partition(students, l, h);
        quickSort(students, l, j - 1);
        quickSort(students, j + 1, h);
    }
}