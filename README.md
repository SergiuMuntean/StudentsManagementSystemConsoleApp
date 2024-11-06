# Student Management System Console App

## Description
This C++ project implements a **Student Management System** that allows users to add, delete, display, and sort student records. Each student has a name, age, group, and grades, which are entered and managed through a simple menu-based interface. Students can be sorted by name using the quicksort algorithm.

## Features
- **Add Student**: Create a new student with name, age, group, and grades.
- **Delete Student**: Remove a student by position.
- **Delete All Students**: Remove all students from the system.
- **Display Students**: View a list of all students with their details.
- **Sort Students**: Sort the students by their name using quicksort.
- **Terminate**: Exit the program.

## Files

### 1. `Student.h`
This file contains the `Student` class definition, including private attributes like `name`, `age`, `group`, and `finGrade`. It also contains methods to handle student data, such as `getName()`, `setAge()`, `enterGrades()`, and more.

### 2. `Student.cpp`
This file implements the methods defined in `Student.h`. It handles the logic for inputting student details, calculating the final grade, and sorting students using the quicksort algorithm.

### 3. `main.cpp`
This file contains the main program logic, allowing the user to interact with the system via a menu. The menu lets the user choose to add, delete, display, or sort students.

## Compilation
To compile the program, use the following command:
```bash
g++ main.cpp Student.cpp -o StudentManagementSystem
```

## Usage
Run the compiled executable.
Choose from the available options:
1 to add a student.
2 to delete a student by position.
3 to delete all students.
4 to display all students.
5 to sort students by name.
0 to terminate the program.

## Example
![{3DEEA0C1-FCA8-4491-A8C0-B90ABD42A9E8}](https://github.com/user-attachments/assets/9f13d641-5439-47f7-ba25-f040a240e351)

## License
This project is licensed under the MIT License - see the LICENSE file for details.
