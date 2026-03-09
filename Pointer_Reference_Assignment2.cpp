#include<iostream>
using namespace std;

int main(){
    int num = 10;
    int *ptrNum = &num;
    int &refNum = num;

    refNum = 20;
    cout << "Modified value of num after using ref: " << num << endl;

    *ptrNum = 30;
    cout << "Modified value of num after using ref: " << num << endl;
}
/*1] Two differences between pointer and reference 
Ans: Two differences between pointer and reference are:
a) Pointer has its own address in memory while,
referece shares the address of the original variable.

b) Pointer can be declared without initailization and 
assigned later while reference must be iitializied 
when decared.

2] Why references cannot be reseated but pointers can?
Ans: Pointer can be reassigned or point to another variable
as it stores the address of the variable while reference is an 
alias that cannot be made to refer to a different variable.

3] Why references cannot be NULL?
Ans: Reference is an alias for an existing variabl not a new 
variable. Unlike pointer it does not store an address separately
it shares the same memory address as the exisiting address.
*/