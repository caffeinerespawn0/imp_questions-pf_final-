#include<stdio.h>
#include<stdlib.h>
void inputMarks(int n,int m,int arr[n][m]){
    for(int i=0;i<n;i++){
        printf("Taking details for student %d: \n",i+1); 
        for(int j=0;j<m;j++){
            printf("Enter marks for subject %d: ",j+1); 
            scanf("%d",&arr[i][j]); 
        }
    }
}//since we just have to fill in the array and not return any value immediately we'll use void 
void displaymarks(int n,int m, int arr[n][m]){
for(int i=0;i<n;i++){
        printf("Student %d: ",i+1);
        for(int j=0;j<m;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}//just the display of marks
int *calculateTotal(int n, int m, int arr[n][m]){
    int *totals=malloc(n*sizeof(int)); //array to store each student's total 
    for(int i=0;i<n;i++){
            totals[i]=0;
        for(int j=0;j<m;j++){
            totals[i]=totals[i]+arr[i][j]; 
        }
    }
    return totals; 
}
int findTopper(int totals[],int n){
    int totalIndex=0; 
    for(int i=1;i<n;i++){
        if(totals[i]>totals[totalIndex]){
            totalIndex=i; 
        }
    }
    return totalIndex; 
}
void highestMarks(int n,int m,int arr[n][m]){
    for(int i=0;i<m;i++){
        int highest=arr[0][i]; 
        for(int j=1;j<n;j++){
            if(arr[j][i]>highest){
                highest=arr[j][i]; 
            }
        }
        printf("Highest marks of subject %d are: %d\n",i+1,highest);
    }
}
int main(){
    int n,m; 
    printf("Enter the number of students: "); 
    scanf("%d",&n); 
    printf("Enter the number of subjects: "); 
    scanf("%d",&m);
    int arr[n][m]; 
    inputMarks(n,m,arr); 
    displaymarks(n,m,arr); 
    int *totals=calculateTotal(n,m,arr);
    for(int i=0;i<n;i++){
        printf("Student %d: %d\n",i+1,totals[i]); 
    }
    int topper=findTopper(totals,n);
    printf("Student %d is the topper\n, with total of %d marks",topper+1);//since the index is returned, doing +1   
    highestMarks(n,m,arr);
return 0; 
}