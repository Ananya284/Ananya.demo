#include<stdio.h>
int main(){
    char ch;
    printf("enter any charecter:");
    scanf("%c",&ch);
    if ((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("This is a vowel");
        break;
    
    default:
    printf("This is a consonant");
        break;
    }
    return 0;
}