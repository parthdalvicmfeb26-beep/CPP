#include<iostream>
using namespace std;

class Box{
    int length = 0;
    int width = 0;
    int height = 0;

    public:
        Box(int length, int width, int height){
            this->length = length;
            this->width = width;
            this->height = height;
        }

        void setDimensions(int length, int width, int height){
            this->length = length;
            this->width = width;
            this->height = height;
        }

        int volume(){
            return length * width * height;
        }
};

int main(){
    int length, width, height;

    cout << "Using Parameterized Constructor:" << endl;

    cout << "Enter length of the box: ";
    cin >> length; //5
    cout << "Enter width of the box: ";
    cin >> width; //5
    cout << "Enter height of the box: ";
    cin >> height; //2

    Box b(length, width, height);
    
    cout << "Initialization using constructor:" << endl;
    cout << "\nVolume of the box is: " << b.volume() << endl; 
    //Volmue is 50 

    cout << "Using setDimensions():" << endl;
    int len, wid, hei;

    cout << "Enter length of the box: ";
    cin >> len; //2
    cout << "Enter width of the box: ";
    cin >> wid; //5
    cout << "Enter height of the box: ";
    cin >> hei; //8

    b.setDimensions(len, wid, hei);
    cout << "\nVolume of the box is: " << b.volume() << endl; 
    //Volume is 80
}

/*[1] Why must initialization happen before assignment? 
Ans: Initialization happens when an object is created 
and assignment happens after the object already exist.

[2] When is initialization preferred over assignment?
Ans: Initialization is preferred over assignment in following cases:

a) When creating objects constructors ensures that the object starts 
with a valid state.

b) For const the variable must be initialized as they cannot be assigned 
later.

c) For object safety it ensures that no unintialized state exists.*/
