#include<iostream>
using namespace std;

class Student{
    protected:
        int rollNo;
    
    public:
        Student(int roll) : rollNo(roll) {}

        virtual void display(){
            cout << "Roll Number is: " << rollNo <<endl;
        }
};

class Result : public Student{
    int marks;

    public:
        Result(int mark, int roll) : marks(mark), Student(roll) {}

       void display() override{
            cout << "Roll Number is: " << rollNo <<endl;
            cout << "Marks is: " << marks << endl;
        }
};

int main(){
    int roll, marks;

    cout << "Enter Your Roll Number: ";
    cin >> roll;
    cout << "Enter Your Marks: ";
    cin>> marks;

    Result result(marks, roll);
    
    Student* student = &result;

    student->display();
}