#include<stdio.h>
int MaxHeightGain(int height[],int size){
    int currentHeight=0; 
    for(int i=0;i<size-1;i++){  //not using i 
       if(height[i+1]>height[i]){
         currentHeight=currentHeight+(height[i+1]-height[i]);
       }
       else{ 
        currentHeight=0;
       }
    }
    printf("Your current height is %d\n", currentHeight);
    return 0; 
}
int main(){
    int n=0;
    int result=0;
    printf("Enter the size of array:\n");
    scanf("%d",&n); 
    int arr[n];
for(int i=0;i<n;i++){
    printf("Enter your height %d\n",i+1);
    scanf("%d",&arr[i]);
}
MaxHeightGain(arr,n);
return 0;
}