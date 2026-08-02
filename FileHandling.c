#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    int roll;
    int marks;
 int i;
    
 FILE *ptr;
 printf("Enter input \n");
 ptr=fopen("student.txt","w");
 for(i=0;i<5;i++){

    scanf("%s %d %d",&name,&roll,&marks);
    fprintf(ptr,"%s %d %d \n",name,roll,marks); ///if we dont write fprintf just below the scanf the next loop override its value
    //value laii file ma rakhxa fprintf ley
 }
 fclose(ptr);
 printf("The Result : \n");
 ptr=fopen("student.txt","r");
 

for(i=0;i<5;i++)
{
     fscanf(ptr, "%s %d %d", name, &roll, &marks) ;  //value laii file bata nikalxa fscanf ley
    printf("name=%s rollno=%d marks=%d\n",name,roll,marks);} //if we dont write printf just after fscanf then it also override its value
 
 fclose(ptr);
}