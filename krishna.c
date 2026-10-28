#include<stdio.h>
int main(){
    int i,n,r,fact=1,sum=0,s;
    printf("enter a number");
    scanf("%d",&n);
    s=n;
    while(n>0){
        r=n%10;
        fact=1;
        for(i=1;i<=r;i++){
        fact=fact*i;
        }
    sum=sum+fact;
    n=n/10;
    }
    if(s==sum){
        printf("krishnamurthy number");
    }
    else{
        printf("not krishnamurthy number");
    }
    return 0;
}