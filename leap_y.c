#include<stdio.h>
int main(){
    int year;
    printf("enter a 4 digits year:");
    scanf("%d",&year);
    if(year%400==0){
        printf("%d is aleap year",year);
    }
    else if(year%4==0&&year%100!=0){
        printf("%d is aleap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }
    return 0;
}