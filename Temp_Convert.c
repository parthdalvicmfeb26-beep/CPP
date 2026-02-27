#include<stdio.h>

float to_celsius(float c){
    float cel = ((c * 9/5) + 32);
    return cel;
}

float to_fahrenheit(float f){
    float fah = ((f - 32) * 5/9);
    return fah;
}

int main()
{
    float temp, fahren, cell;
    printf("\nEnter Temperature: ");
    scanf("%f",&temp);
    fahren = to_fahrenheit(temp);
    cell = to_celsius(temp);
    printf("\nTemperature in Fahrenheit: %.2f",fahren);
    printf("\nTemperature in Celsius: %.2f",cell);
}

float to_celsius(float c);
float to_fahrenheit(float f);