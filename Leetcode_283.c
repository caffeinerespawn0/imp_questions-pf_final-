#include<stdio.h> 
int main(){
    int nums[]={0,1,0,3,12}; 
    int temp=0; 
    int numsize=sizeof(nums)/sizeof(nums[0]); //number of elements 
    for(int i=0; i<numsize;i++){
        if(nums[i]==0){ 
            for(int j=i+1;j<numsize;j++){
                if(nums[j]!=0){
                    temp=nums[i]; 
                    nums[i]=nums[j];
                    nums[j]=temp; 
                    break;                    
                }
            }
        }
    }
    for(int i=0; i<numsize;i++){
        printf("%d ",nums[i]);
    }
    return 0; 
}