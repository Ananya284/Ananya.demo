#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,total;
    float per;
    printf("enter the marks of 5 subjects:");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    per=total/5.0;
    printf("total=%d",total);
    printf("percentage=%f",per);
    if(per>=90){
        printf("grade=A+");
    }else if(per>=80){
        printf("grade=A");
    }else if(per>=70){
        printf("grade=B");
    }else if(per>=60){
        printf("grade=C");
    }else if(per>=50){
        printf("grade=D");
    }else{
        printf("grade=F");
    }
    return 0;
}