#include<stdio.h>
int main(){
    int num1,num2,num3;
    float avg;
    printf("enter three number:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3.0;
    printf("average value is:%f",avg);
    return 0;
}