/*#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Enter Number of integers: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter The Numbers to store in array: " << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\nEnterd Integers in Array!" << endl;

    for(int i = 0; i < n; i++){
        cout << " " << arr[i];
    }

    delete[] arr;

    arr = nullptr;

    return 0;
}*/

//Using Malloc

#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n;

    cout << "Enter Number of integers: ";
    cin >> n;

    int* arr = (int*) malloc(n* sizeof(int));

    cout << "Enter The Numbers to store in array: " << endl;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\nEnterd Integers in Array!" << endl;

    for(int i = 0; i < n; i++){
        cout << " " << arr[i];
    }
    
    free(arr);

    arr = nullptr;

    return 0;
}