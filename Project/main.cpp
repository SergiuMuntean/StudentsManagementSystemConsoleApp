#include<iostream>
#include "Student.h"
#include<vector>
#include<string>

using namespace std;

enum options{
    ADD = 1, DELETE = 2, DELETE_ALL = 3, DISPLAY = 4, SORT = 5, TERMINATE = 0
};

int main() {
    cout << "Welcome to the students management system!" << endl;
    
    vector<Student*> students;
    int option;
    
    do {
        cout << "Enter your option: (1-ADD/ 2-DELETE A STUDENT/ 3-DELETE_ALL/ 4-DISPLAY STUDENTS/ 5- SORT STUDENTS BY NAME/ 0-EXIT): ";
        cin >> option;
        
        switch(option) {
            case ADD: {
                Student student;
                Student* newStudent = student.createStudent();
                students.push_back(newStudent);
                break;
            }
            case DELETE: {
                int position;
                cout << "Enter the position of the student to delete: ";
                cin >> position;
                if(position > 0 && position <= students.size()) {
                    delete students[position - 1];
                    students.erase(students.begin() + position - 1);
                } else {
                    cout << "Invalid position!" << endl;
                }
                break;
            }
            case DELETE_ALL: {
                for(auto stud : students) {
                    delete stud;
                }
                students.clear();
                break;
            }
            case DISPLAY: {
                for(auto& stud : students) {
                    stud->displayStudent();
                }
                break;
            }
            case SORT: {
                students[0]->quickSort(students, 0, students.size() - 1);
                break;
            }
            case TERMINATE: {
                cout << "Exiting the system..." << endl;
                exit(0);
                break;
            }
            default: {
                cout << "Invalid option! Please try again." << endl;
                break;
            }
        }
    } while(option != TERMINATE);
    return 0;
}