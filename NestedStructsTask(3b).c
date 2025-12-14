//for multiple employees 
#include<stdio.h>
#include<stdlib.h>
struct date{
int day;
char month[20];
int year;
};
struct employee{
    char name[50];
    int ID;
    int salary;
    struct date joining; 
};
int main(){
    struct employee *e;//every pointer is an array
    int n; 
    printf("Enter the number of employees: ");
    scanf("%d",&n);
    e = malloc(n*sizeof(struct employee));
    for(int i=0;i<n;i++){
    printf("Enter the name: ");
    scanf("%s",e[i].name);
    printf("Enter the ID: ");
    scanf("%d",&e[i].ID);
    printf("Enter the salary: ");
    scanf("%d",&e[i].salary);
    printf("Enter employee's joining date: ");
    scanf("%d",&e[i].joining.day);
    printf("Enter month: ");
    scanf("%s",e[i].joining.month);
    printf("Enter year: ");
    scanf("%d",&e[i].joining.year);
}
for(int i=0;i<n;i++){
    printf("Details\n1.Name%s\n2.ID:%d\n3.Salary:%d\n4.Date of Joining:%d/%s/%d\n",e[i].name,e[i].ID,e[i].salary,e[i].joining.day,e[i].joining.month,e[i].joining.year);
}
    free(e);
    return 0;
}