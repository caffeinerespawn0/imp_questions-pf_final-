#include<stdio.h>
struct Address{
    char city[50];
    int housenum;
};
struct Student{
    char name[50];
    int roll;
    struct Address a; 
};
int main(){
    struct Student s1; 
    printf("Enter the name of student: ");
    scanf("%s",s1.name);
    printf("Enter the roll number: ");
    scanf("%d",&s1.roll);
    printf("Enter your city: ");
    scanf("%s",s1.a.city);
    printf("Enter your house number: ");
    scanf("%d",&s1.a.housenum);
    printf("Name: %s, Roll number:%d, City:%s, House Number:%d",s1.name,s1.roll,s1.a.city,s1.a.housenum);
    return 0; 
}