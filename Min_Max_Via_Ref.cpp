#include<iostream>

using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal){
    if(a > b && a > c){
        maxVal = a;
    }
    else if(b > a && b > c){
        maxVal = b;
    }
    else{
        maxVal = c;
    }

    if(a < b && a < c){
        minVal = a;
    }
    else if(b < a && b < c){
        minVal = b;
    }
    else{
        minVal = c;
    }
}

int main(){
    int num1, num2, num3;
    int hi = 0;
    int lo = 0;
    
    cout <<"\nEnter First Number: ";
    cin >> num1;
    cout <<"\nEnter Second Number: ";
    cin >> num2;
    cout <<"\nEnter Third Number: ";
    cin >> num3;

    cout << "\n Original Value Before Calling Function! \n";

    cout << "\nValue of highest number is: " << hi << "\n Value of lowest number is: " << lo << "\n";

    findMinMax(num1, num2, num3, lo, hi);

    cout << "\n Verifying Value After Calling Function!\n";

    cout << "\nValue of highest number is: " << hi << "\n Value of lowest number is: " << lo;
}