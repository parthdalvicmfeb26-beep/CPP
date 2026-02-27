#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int y = 20;
    int z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;

    cout << "\nValues of x and z before swapping via pointer!";

    cout << "\nValue of x: " << x;        
    cout << "\nValue of z: " << z;

    cout << "\nAddress of x, y and z before swapping via poiter!";
    cout << "\nAddress of x: " << px;
    cout << "\nAddress of y: " << py;
    cout << "\nAddress of z: " << pz;

    *px = x;
    x = z;
    z = *px;

    cout << "\nValues of x and z after swapping via pointer!";

    cout << "\nValue of x: " << x;
    cout << "\nValue of z: " << z;

    cout << "\nAddress of x, y and z after swapping via poiter!";

    cout << "\nAddress of x: " << px;
    cout << "\nAddress of y: " << py;
    cout << "\nAddress of z: " << pz;
}