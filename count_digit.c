#include<stdio.h>
int main(){
    int n,r;
    long long count=0;
    printf("enter a number:");
    scanf("%d", &n);
    for(int i=1;i<n;i++){
        count++;
        n=n/10;
    }
    printf("digit count:%lld",count);
    return 0;
}