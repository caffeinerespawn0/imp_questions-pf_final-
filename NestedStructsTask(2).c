#include<stdio.h>
struct Marks{
    float marks[3];
};
struct Student{
    char name[50];
    int roll_num;
    struct Marks m;
    float total; 
};
int main(){
struct Student s[3];
for(int i=0;i<3;i++){
    printf("Student:#%d\n",i+1);
    printf("Name: ");
    scanf("%s",s[i].name);
    printf("Roll Number: ");
    scanf("%d",&s[i].roll_num);
    printf("---Taking marks of subjects----\n");
    float sum=0; 
    for(int j=0;j<3;j++){
        printf("Enter marks for sub#%d: ",j+1);
        scanf("%f",&s[i].m.marks[j]);
        sum=sum+s[i].m.marks[j];
    }
    s[i].total=sum; 
}
for(int i=0;i<3;i++){
    printf("Student:#1%d\n",i+1);
    printf("Name: %s",s[i].name);
    printf("Roll Number: %d",s[i].roll_num);
    printf("Total Marks: \n");
    printf("%.2f",s[i].total);
    
}
return 0;
}