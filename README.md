WAP TO FIND THE AREA OF THE CIRCLE AND CIRCURMFERENCE USING INPUT RADIUS
   #include<stdio.h>
float pi=3.14;
int main(){
    float area,radius,circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);
    area=(2*pi* radius *radius);
    circumference=2*pi*radius;
    printf("the area of the circle is %f\nthe circumference of the circle is %f",area,circumference);
return 0;
}


