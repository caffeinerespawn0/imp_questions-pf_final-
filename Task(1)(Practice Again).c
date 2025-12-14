#include<stdio.h>
#include<string.h>
#define MAX 50
struct student{
    char name[50];
    int roll;
    float marks[3];
    char grade[3];
    float percentage; 
}; 
void gradesys(struct student *s){
    float p=s->percentage; 
    if(p>90){
        strcpy(s->grade,"A+");
    }
    else if(p>80){
        strcpy(s->grade,"A");
    }
    else if(p>70){
        strcpy(s->grade,"B+");
    }
    else if(p>60){
        strcpy(s->grade,"B");
    }
    else{
        strcpy(s->grade,"C");
    }
}
float getValidMarks(){
    float marks;
    while(1){
        scanf("%f",&marks); 
    if(marks>=0&&marks<=100){
        return marks;
    }
    printf("Enter valid marks (0-100)");
}
}
int main(){
    int n;
    struct student s[MAX]; 
    float sum=0.0;
    printf("Enter the number of students: ");
    scanf("%d",&n); 
    for(int i=0;i<n;i++){
        printf("Enter the name of student #%d:",i+1);
        scanf("%s",&s[i].name); 
        printf("Enter the roll number of student #%d:",i+1);
        scanf("%d",&s[i].roll);
        printf("Taking input of marks: ");
        sum=0.0; 
        for(int j=0;j<3;j++){
            printf("Enter marks for subject #%d: ",j+1);
            s[i].marks[j]=getValidMarks(); 
            sum=sum+s[i].marks[j];
        }
        s[i].percentage=(sum/3);
        gradesys(&s[i]); 
    }
    float classAvg=0; 
    //calculating classAvg:
    for(int i=0;i<n;i++){
        classAvg=classAvg+s[i].percentage;
    }
    classAvg=(classAvg/n); 
    printf("The class average is: %.2f\n",classAvg); 
    printf("\n-----Class Details:----\n");
    printf("Students above average: ");
    for(int i=0;i<n;i++){
        if(s[i].percentage>classAvg){
            printf("Name: %s Roll Number: %d, Percentage: %.2f\n",s[i].name,s[i].roll,s[i].percentage);
        }
    }
    printf("Students below average: ");
    for(int i=0;i<n;i++){
        if(s[i].percentage<classAvg){
            printf("Name: %s Roll Number: %d, Percentage: %.2f\n",s[i].name,s[i].roll,s[i].percentage);
        }
    }
    char gsearch[3]; 
    printf("Enter a grade to search:(A+,A,B+,B,C)\n");
    scanf("%s",gsearch);
    for(int i=0;i<n;i++){
        if(strcmp(gsearch,s[i].grade)==0){
            printf("----Students with grade %s\n----",gsearch);
            printf("Name: %s Roll Number: %d, Percentage: %.2f\n",s[i].name,s[i].roll,s[i].percentage);
        }
    }
    int rsearch; 
    printf("Enter a roll number to search: \n"); 
    scanf("%d",&rsearch);
    int found=0;
    for(int i=0;i<n;i++){
        if(rsearch==s[i].roll){
            printf("----Student with roll number %d\n----",rsearch);
            printf("Name: %s Roll Number: %d, Percentage: %.2f\n",s[i].name,s[i].roll,s[i].percentage);
            found=1;
            break;
        }
    }
    if(!found){
            printf("Student w that roll number doesnt exist"); 
    }
    return 0;
}
