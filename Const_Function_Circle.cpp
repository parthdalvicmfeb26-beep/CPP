#include<iostream>
using namespace std;

const float PI = 3.14159f;

float circleArea(float radius){
    int area = PI * (radius * radius);
    return area; 
}

float circlePerimeter(float radius){
    int circum = 2 * PI * radius;
    return circum;
}

int main(){
    float r = 7.0;

    cout << "\nArea of Circle is: " << circleArea(r);
    cout << "\nCircumference of Circle is: " << circlePerimeter(r);

    //PI = 3.0f; ---> shows error: ssignment of read-only variable 'PI'
    //When we try to change the value of the constant variable it displays error ssignment of read-only variable 'PI'.
    //Before executing the code also it shows the red line under PI showcasing that this line has error!
}