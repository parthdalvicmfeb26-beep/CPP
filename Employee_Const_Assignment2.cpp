#include <iostream>
#include<string>
using namespace std;

class Employee{
    const int employeeId;
    string name;
    float salary;

    public:
        Employee(int empId, string n, float s) : employeeId(empId), name(n), salary(s){};
        
        friend void displayDetails(Employee &e);
};

void displayDetails(Employee &e){
    cout << "\nName of the Employee: " << e.name << endl;
    cout << "\nEmployee ID: " << e.employeeId << endl;
    cout << "\nEmployee Salary: " << e.salary << endl;
}

int main(){
    int id;
    float sal;
    string n;

    cout << "Enter Your ID: ";
    cin >> id;
    cout << "Enter Yout Name: ";
    cin >> n;
    cout << "Enter Your Salary ";
    cin >> sal;

    Employee e(id, n, sal);

    displayDetails(e);
}

/*1] Why must const members be initialized in initializer list?
Ans: A const data member must be initialized when the object is 
created, because its value cannot be cahnged after initialization, 
the initializer list initialized members before the constructor
body executes, so its the only place where the const members
can receive their value.

2] What happens if you try to assign the value of a const member inside constructor body?
Ans: It throws compile time error, as the const variables cannot be 
assigned after initialization, the compiler rejects it.

3] Why is initializer list faster than assignment?
Ans: Because initializer list performs direct initialization, while
assignment does it in two steps: First default initialized (int x) 
then assigns a new value to it (x = 10 or x = y);
*/