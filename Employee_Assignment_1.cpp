#include<iostream>
#include<string>
using namespace std;

class Employee{
    int empId;
    string empName;
    double empSalary;
    double empgrosssalary = 0;

    public:

        void setEmpId(int id){
            empId = id;
        }
        int getEmpId() const{
            return empId;
        }

        void setEmpName(string name){
            empName = empName;
        }
        string getEmpName() const{
            return empName;
        }

        void setEmpSalary(double salary){
            empSalary = salary;
        }
        double getEmpSalary() const{
            return empSalary;
        }

        void grossSalary(double salary){
            if(salary <= 5000){
                empgrosssalary = salary + (salary * 0.10);
            }
            else if(salary > 5000 && salary <= 10000){
                empgrosssalary = salary + (salary * 0.15);
            }
            else if(salary > 10000){
                empgrosssalary = salary + (salary * 0.20);
            }
            cout << "\nGross Salary is: " << empgrosssalary << endl;
        }

        double getEmpGrossSalary() const{
            return empgrosssalary;
        }

};

int main(){
    Employee emp;

    int choice, id;
    double salary;
    string name;

    cout << "\nEnter Your Name: ";
    cin >> name;
    cout << "\nEnter Your Salary: ";
    cin >> salary;
    cout << "\nEnter Your Id Number: ";
    cin >> id;

    emp.setEmpId(id);
    emp.setEmpName(name);
    emp.setEmpSalary(salary);

    do{
        cout << "\n1. To Display Employee\'s Details." << endl;
        cout << "\n2. Update Employee\'s Details." << endl;
        cout << "\n3. Calculate Gross Salary." << endl;        
        cout << "\n4. Exit." << endl;

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice){
            case 1:
                cout << "Employee\'s ID is: " << emp.getEmpId() << endl;
                cout << "Employee\'s Name is: " << emp.getEmpName() << endl;
                cout << "Employee\'s Salary is: " << emp.getEmpSalary() << endl;
                cout << "Employee\'s Gross Salary is: " << emp.getEmpGrossSalary() << endl;

                break;

            case 2:
                cout << "\nEnter the correct name of employee to update: ";
                cin >> name;
                emp.setEmpName(name);
                cout << "\nEnter the correct salary of employee to update: ";
                cin >> salary;
                emp.setEmpSalary(salary);
                cout << "\nEmployee\'s Details updated successfully!" << endl;

                break;

            case 3:
                emp.grossSalary(salary);
                break;
            
            case 4:
                cout << "\nExiting the program!" << endl;
                break;
        }
    }while(choice != 4);
}