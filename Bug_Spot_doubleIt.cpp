#include<iostream>
using namespace std;

void doubleIt(int &n){
    n = n *2;
    cout << "\nInside doubleIt: " << n;
}

int main(){
    int num =7;
    doubleIt(num);
    cout << "\nIn main after call: \n" << num;
    return 0;
}