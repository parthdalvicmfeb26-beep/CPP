#include<iostream>
#include<string>
using namespace std;

class Student{
    int rollNo;
    string name;
    int marks;
    public:
        Student(){
            cout << "\nThis is a default costructor!" << endl;
        }

        Student(int rollNo, int marks, string name){
            this->rollNo = rollNo;
            this->marks = marks;
            this->name = name;
        }

        Student(int a){
            cout <<"\nThis is a parameterized constructor!" << endl;
        }

        friend void displayDetails(Student &s);
};

void displayDetails(Student &s){
            cout << "Name of the Student: " << s.name << endl;
            cout << "Roll Number of the Student: " << s.rollNo << endl;
            cout << "Marks of the Student: " << s.marks << endl;
        }

int main(){
    Student s1;
    int roll, marks;
    string name;

    cout << "\nEnter Your Name: ";
    cin >> name;
    cout << "\nEnter Your Makrs: ";
    cin >> marks;
    cout << "\nEnter Your Roll Number: ";
    cin >> roll;

    Student s2(roll);

    Student s3(roll, marks, name);

    displayDetails(s3);
}

/*1] When does compiler generate a default constructor?
Ans: When the object of the class is created then the
compiler automatically generates the default constructor.

2] When does it NOT generate one?
Ans: When the user has already created a default constructor
then the compiler compiles it, if no constructor is created
then the compiler generates a default one.

3] Can constructors be overloaded?
Ans: Yes constructor can be overloaded.
*/