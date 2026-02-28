#include<iostream>
#include<string>
using namespace std;

class Student{
    string name;
    int roll_no;
    float marks;
    char grade;

    public:

        Student(){
            roll_no = 0;
            marks = 0;
            grade = 'F';
         }

        void setName(string n){
            name = n;
        }

        string getName() const{
            return name;
        }

        void setRoll(int r){
            roll_no = r;
        }

        int getRoll() const{
            return roll_no;
        }

        void setMarks(float m){
            marks = m;
        }

        float getMarks() const{
            return marks;
        }

        void setGrade(char g){
            grade = g;
        }

        char getGrade() const{
            return grade;
        }

        char calculateGrade(){
            if(marks >= 90 && marks <= 100){
                grade = 'A';
            }
            else if(marks >= 80 && marks <= 89){
                grade = 'B';
            }
            else if(marks >= 70 && marks <= 79){
                grade = 'C';
            }
            else if(marks >= 60 && marks <= 69){
                grade = 'D';
            }
            else{
                grade = 'F';
            }
            return grade;
        }
};

int main()
{
    Student s;
    string name;
    int roll_no;
    float marks;
    char grade;
    int choice;

    do{
        cout << "\n1. Accept Information!" << endl;
        cout << "\n2. Display Information!" << endl;
        cout << "\n3. Calculate Grade!" << endl;
        cout << "\n4. Exit!" << endl;

        cout << "\n---------------------------------------------------------------------------------\n";

        cout << "\nEnter you\'re choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter Your Name: " << endl;
                cin >> name;
                s.setName(name);
                cout << "Enter Your Roll Number: " << endl;
                cin >> roll_no;
                s.setRoll(roll_no);
                cout << "Enter Your marks: " << endl;
                cin >> marks;
                s.setMarks(marks);

                break;

            case 2:
                cout << "Name of The Student: " << s.getName() << endl;
                cout << s.getName() <<"\'s Roll Number: " << s.getRoll() << endl;
                cout << s.getName() <<"\'s Marks: " << s.getMarks() << endl;
                cout << s.getName() <<"\'s Grade: " << s.getGrade() << endl;

                break;

            case 3:
                s.calculateGrade();
                cout << s.getName() <<" scored " << s.getGrade() << " Grade" << endl;
                break;
                
            
            case 4:
                cout << "\nExiting the program!" << endl;
                break;
            
            default:
                cout << "\nEnter Valid Number!\n";
                break;
        }

    }while(choice != 4);
}