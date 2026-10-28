#include<stdio.h>
int main(){
    int i,n,choice;
    printf("enter a value");
    scanf("%d",&n);
    printf("enter 1 for even\n");
    printf("enter 2 for odd\n");
    scanf("%d",&choice);
    for(i=1;i<=n;i++){
        if(choice==1){
            if(i%2==0){
                printf("%d \n",i);
            }
        }
        else if(choice==2){
            if(i%2!=0){
                printf("%d \n",i);
            }
        }
        else{
            printf("invalid choice");
        }
    }
    return 0;
}