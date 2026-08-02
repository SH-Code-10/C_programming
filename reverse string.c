#include<stdio.h>
int main(){
    char rev[10];
    printf("Enter the string : ");
    scanf("%s",rev);
    for(int i = '\0';i>=0;i--)
    {
        printf("%c",rev[i]);
    }
    return 0;
}