/* 
            page no 20 5b>>>
#include<stdio.h>
int main(){
    int i,j;
    int n=5;
    for(i=0;i<n;i++){
        for(j=n;j>n-(i+1);j--){
            printf("%d ",n-i);
        }
        printf("\n");
    }

}

              pageno 20 5a
#include<stdio.h>
#include<math.h>
int main(){
    int rem,result=0;
    int n=371;
    int temp=n;
    int a=n;
    int count=0;
    while(n!=0){
        n/=10;
       
        count++;
    }
    printf("%d ",count);

   while(a!=0){
    rem=a%10;
    result+=pow(rem,count);
    a/=10;

}
if(result==temp){
    printf("%d is armstrong",temp);

}
else{
    printf("%d is not armstrong",temp);

}
}

             qno 6a
#include<stdio.h>
int main(){
    int i,j;
    int temp[2*2];
    int arr[2][2]={{1,2},
{9,8}};
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
int k=0;
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        temp[k]=arr[i][j];
        k++;


    }

}


int var;

for(i=0;i<2*2;i++){
    for(j=i+1;j<2*2;j++){
        if(temp[i]>temp[j]){
            var=temp[i];
            temp[i]=temp[j];
            temp[j]=var;

        }

    }

}
k=0;
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        arr[i][j]=temp[k];
        k++;
    }
}
printf("ascending order of matrix :\n");
for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
}
printf("\n Second largest element in matrix is : %d",temp[2*2-2]);




}
                     qno 6b
#include<stdio.h>
int main(){
    char name[100]="shishir";
    char rev[100];
    int count=0;int c=0,d=0;
    char cname[100];
    while(name[count]!='\0'){
        cname[count]=name[count];
        count++;


    }
    cname[count]='\0';
    printf("%s \n",cname);
    printf("%d \n",count);//finding length
    count--;
    int f=0;
    for(int i=count;i>=0;i--){
        rev[f]=cname[i];
        f++;
        
    }
    printf("%s\n",rev);


char concat[100];
   while(name[c]!='\0'){
    concat[c]=name[c];
    c++;

   }
   concat[c]=' ';

   c++;
   while(rev[d]!='\0'){
    concat[c]=rev[d];
    c++;
    d++;
   }
   concat[c]='\0';
   printf("%s ",concat);
}
                    qn0 7
#include<stdio.h>
int findsum(int n){
    int result=0;
    int i;
   for(i=0;i<=n;i+=2){
    if(i%5==0)
    {
        result+=i;
    }
    }
    return result;
}
int main(){
    int n=20;
    printf(" Result : %d ",findsum(n));
} 
    
   
#include<stdio.h>
struct campus{
    char name[10];
    int nos;

};
int college(struct campus c[]);


int main(){
    struct campus c[4];
    int i;
    for(i=0;i<4;i++){
        scanf("%d %s",&c[i].nos,c[i].name);

    }

    college(c);
    

}int college(struct campus c[]){
    int i;
    for(i=0;i<4;i++){

    
    if(c[i].nos>1000){
        printf("%s ",c[i].name);
    }
}

}
#include<stdio.h>
int fibo(int n){
    if(n==1){
        return 0;

    }
    if(n==2){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n=7;
    printf("%d ",fibo(n));
}
#include<stdio.h>
int main(){
    int roll,marks;
    char name[10];
    FILE *student;
    student=fopen("st.txt","w");
    if(student==NULL){
        printf("error");
        return 1;
    }
    int i;
    for(i=0;i<5;i++){
        scanf("%s %d %d",name,&roll,&marks);
        fprintf(student,"%s %d %d \n",name,roll,marks);


    }
    fclose(student);
    student=fopen("st.txt","r");
     if(student==NULL){
        printf("error");
        return 1;
    }
    while(fscanf(student,"%s%d%d",name,&roll,&marks)!=EOF){
        printf("%s %d %d\n",name,roll,marks);
    }
    fclose(student);
}
#include<stdio.h>
#include<math.h>
int factorial(int n){
    int result=1;
    int i;
    for(i=1;i<=n;i++){
        result*=i;
    }
    return result;
}
float power(float n,float p){
    float result=1;
    int i;
    for(i=1;i<=p;i++){
        result*=n;

    }
    return result;
}
int main(){
    int deg=90;
    float x=(float)deg*3.14/180;
    int i;
    float result=0;
    int sign=1;
    for(i=1;i<=10;i+=2){
        result+=(sign*power(x,i))/factorial(i);
        sign=-sign;
    }
    printf("%f",result);
}
#include<stdio.h>
int main(){
    int n=5;
   
    int count=1;
     int i;
     for(i=2;i<n;i++){
        if(n%i!=0){
            goto prime;

        }
        else{
            goto composite;
        }
        

     }
     composite:
     printf("%d is composite",n);
     return 1;
     prime:
     printf("%d is  prime number",n);
     return 1;
}

#include<stdio.h>
int main(){
    int i,j;
    int one[3*3];
    int k=0;
    int arr[3][3];
    printf("enter :\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){

            scanf("%d",&arr[i][j]);
            if(i==j){
             one[k]=arr[i][j];
             k++;
            }
           
           
    }
   
    
   
}
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){

           
           
    }
     
}
for(i=0;i<3;i++){
    printf("\n%d ",one[i]);
}

int largest=one[0];
for(i=0;i<3;i++){
    if(one[i]>largest){
        largest=one[i];
    }
    
}
printf("\n%d is largest among principal diagonal",largest);}

*/

