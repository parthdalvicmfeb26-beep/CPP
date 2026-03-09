#include<iostream>
#include<string>
using namespace std;

class Employee{
    int id;
    string name;
    mutable int accessCount = 0;

    public:
        Employee(int id, string name) : id(id), name(name){
        }

        Employee(const Employee& other){
            id = other.id;
            name = other.name;
            accessCount = other.accessCount;     
            cout << "Copy constructor was called!" << endl;      
        }

        void const display(){
            accessCount++;
            cout << accessCount << endl;
        }
};

int main(){
    int id;
    string name;

    cout << "Enter Your ID: " << endl;
    cin >> id;
    cout << "Enter Your Name: " << endl;
    cin >> name;

    Employee e1(id, name);
    

    e1.display();
    e1.display();
    e1.display();

    Employee e2 = e1;

    e2.display();
    e2.display();

}