#ifndef _STUDENT_
#define _STUDENT_

#include<string>
#include<vector>

using namespace std;

class Student
{
private:
    //atributes
    string name;
    int age;
    string group;
    double finGrade;
public:
    //methods
    string getName();
    void setName(string name);
    void setAge();
    void giveGroup();
    vector<int> enterGrades();
    double finalGrade(vector<int>& grades);
    void sayHello();
    void displayStudent();
    Student* createStudent();
    int partition(vector<Student*>& students, int l, int h);
    void quickSort(vector<Student*>& students, int l, int h);
};

#endif // _STUDENT_
