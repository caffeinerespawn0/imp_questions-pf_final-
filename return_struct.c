#include<stdio.h>
#include<string.h>
//update vals and call:
struct Student {
    char name[50];
    int roll;
};
struct Student makestudent(char name[50], int roll){
    struct Student s; 
    strcpy(s.name,name);
    s.roll=roll;
    return s;  
}
int main(){
    struct Student s1=makestudent("Mahnoor",8999); 
    printf("%s",s1.name);
    printf("%d",s1.roll);
    return 0; 
}