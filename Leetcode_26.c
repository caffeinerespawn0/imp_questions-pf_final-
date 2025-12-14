//leetcode 26(removing duplicates)
#include<stdio.h>
int main(){
    int nums[]={0,0,1,1,1,2,2,3,3,4}; 
    int length=sizeof(nums)/sizeof(nums[0]);
    int i=0; 
        for(int j=1;j<length;j++){
            if(nums[j]!=nums[i]){
                i++; 
                nums[i]=nums[j];
            }
        }
    for(int k=0;k<i;k++){
        printf("%d",nums[k]);
    }
    return 0;
}