#include<stdio.h>

int total_marks(double a, double b, double c, double d, double e){
    double total = a + b + c + d + e;
    return total;
}

int percentage(double x){
    double percent;
    percent = (x / 500) * 100;
    return percent;
}

int grade(double g){    
    (g >= 75) ? printf("Grade: A") : (g >= 60) ? printf("Grade: B") : (g >= 45) ? printf("Grade: c") : printf("Fail");
    return 0;
}

int main(){
    double num1, num2, num3, num4, num5;
    printf("\nEnter Marks Obtained in First Subject: ");
    scanf("%lf",&num1);
    printf("\nEnter Marks Obtained in Second Subject: ");
    scanf("%lf",&num2);
    printf("\nEnter Marks Obtained in Third Subject: ");
    scanf("%lf",&num3);
    printf("\nEnter Marks Obtained in Fourth Subject: ");
    scanf("%lf",&num4);
    printf("\nEnter Marks Obtained in Fifth Subject: ");
    scanf("%lf",&num5);
    double ttl = total_marks(num1, num2, num3, num4, num5);
    printf("\nTotal Marks Obtained: %lf\n",ttl);
    double percen = percentage(ttl);
    printf("\nPercentage is: %lf\n",percen,"%");
    grade(percen);
}