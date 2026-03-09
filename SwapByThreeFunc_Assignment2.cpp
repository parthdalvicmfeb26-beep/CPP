#include<iostream>
using namespace std;

void swapByValue(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    //cout <<"\nNumbers after swapping using swapByValue: " << a << " " << b << endl;
}

void swapByAddress(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    //cout <<"\nNumbers after swapping using swapByAddress: " << *a << " " << *b << endl;
}

void swapByReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    //cout <<"\nNumbers after swapping using swapByReference: " << a << " " << b << endl;
}

int main(){
    int num1, num2;

    cout <<"Enter First Number: ";
    cin >> num1;
    cout <<"Enter Second Number: ";
    cin >> num2;

    cout << "\nNumbers Before Swapping: " << num1 << " " << num2 << endl;

    swapByValue(num1, num2);
    cout <<"\nNumbers after swapping using swapByValue: " << num1 << " " << num2 << endl;

    swapByAddress(&num1, &num2);
    cout <<"\nNumbers after swapping using swapByAddress: " << num1 << " " << num2 << endl;

    swapByReference(num1, num2);
    cout <<"\nNumbers after swapping using swapByReference: " << num1 << " " << num2 << endl;
}

//Swap By Address actually swaps the value.

/*Explain how reference variables act as aliases and how that affects swapByReference(). 
Ans: Any operation performed on the reference variable directly affects the original variable,
like if the 'int num' and its ref is '&num' then if we change the value of '&num' then the value 
of 'num' also changes, on the other hand swapByReference() directly changes the value of original
value (possible by passing parameters). 
*/