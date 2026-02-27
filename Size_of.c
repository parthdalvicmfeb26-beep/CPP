#include<stdio.h>

int main(){
    printf("\nSize of int is: %d\n",sizeof(int)); //4
    printf("\nSize of short int is: %d\n",sizeof(short int)); //2
    printf("\nSize of long int is: %d\n",sizeof(long int)); //4
    printf("\nSize of long lonng int is: %d\n",sizeof(long long int)); //8
    printf("\nSize of unsigned int is: %d\n",sizeof(unsigned int)); // 4
    printf("\nSize of float is: %d\n",sizeof(float)); //4
    printf("\nSize of double is: %d\n",sizeof(double)); //8
    printf("\nSize of long double is: %d\n",sizeof(long double)); //12
    printf("\nSize of char is: %d\n",sizeof(char)); //1
}

//int float have same size. 
//No unsiged int and int have same size.