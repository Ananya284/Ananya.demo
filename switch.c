#include<stdio.h>
int main(){
    int num1,num2,choice;
    printf("enter any two number:\n");
    scanf("%d%d",&num1,&num2);
    printf("enter your choice:");
    scanf("%d",&choice);
    printf("1 add\n");
    printf("2 substract\n");
    printf("3 multiplication\n");
    printf("4 division\n");
    switch(choice){
        case 1:
           printf("result=%d",num1+num2);
           break;
        case 2:
           printf("result=%d",num1-num2);
           break;
        case 3:
           printf("result=%d",num1*num2);
           break;
        case 4:
           printf("result=%d",num1/num2);
           break;
        default:
           printf("invalid choice");
    }
    return 0;
}