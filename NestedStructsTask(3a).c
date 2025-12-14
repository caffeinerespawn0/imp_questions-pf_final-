//for single employee jbtw
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
    struct employee *e;
    e = malloc(sizeof(struct employee));
    printf("Enter the name: ");
    scanf("%s",e->name);
    printf("Enter the ID: ");
    scanf("%d",&e->ID);
    printf("Enter the salary: ");
    scanf("%d",&e->salary);
    printf("Enter employee's joining date: ");
    scanf("%d",&e->joining.day);
    printf("Enter month: ");
    scanf("%s",e->joining.month);
    printf("Enter year: ");
    scanf("%d",&e->joining.year);
    printf("Details\n1.Name%s\n2.ID:%d\n3.Salary:%d\n4.Date of Joining:%d/%s/%d\n",e->name,e->ID,e->salary,e->joining.day,e->joining.month,e->joining.year);
    free(e);
    return 0;
}
