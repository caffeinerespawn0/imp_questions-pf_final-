#include<stdio.h>
#include<stdlib.h>
int *calculateResult(int n,int m,int marks[n][m]){
    int *avg=malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        float total=0;
        printf("Taking details for students %d\n",i+1); 
        for(int j=0;j<m;j++){
            printf("Subject %d: \n",j+1);
            scanf("%d",&marks[i][j]);
            total=total+marks[i][j]; 
    }
    avg[i]=total/m; 
}
return avg; 
}
int displayMarks(int n, int m, int marks[n][m]){
    for(int i=0;i<n;i++){
        printf("Student %d: \n",i+1); 
        for(int j=0;j<m;j++){
            printf("Marks %d: %d\n",j+1,marks[i][j]); 
        }
    }
}
int highestavg(int n, int avg[n]){
    int highest=0; 
    for(int i=1;i<n;i++){
        if(avg[i]>avg[highest]){
            highest=i; 
        }
    }
    return highest; 
}
int classAvg(int n,int avg[n]){
    int total=0; 
    for(int i=0;i<n;i++){
        total=avg[i]+total; 
    }
    int cavg=total/n; 
    return cavg; 
}
int main(){
    int n=2;
    int m=2;
    int marks[n][m]; 
    int *avg=malloc(n*sizeof(int));
    avg=calculateResult(n,m,marks);  
    for(int i=0; i<n;i++){
        printf("Student %d: Average:%d\n",i+1,avg[i]);
    }
    displayMarks(n,m,marks);
    int highest=highestavg(n,avg);
    printf("Highest average is of student %d, which is : %d",highest+1, avg[highest]);
    float class_avg= classAvg(n,avg); 
    printf("Class average is %.2f",class_avg); 
    free(avg);
    return 0; 
}