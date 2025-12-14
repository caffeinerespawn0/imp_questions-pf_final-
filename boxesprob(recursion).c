//You have a row of boxes, each containing some candies.
//You can only pick one box at a time, but if you pick a box, you cannot pick the next box (because it’s “locked”).
//Your goal: collect the maximum candies possible.
#include<stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b; 
    }
}
int maxCandies(int boxes[],int n){
    int option1=0;
    int option2=0; 
    if(n<=0){
        return 0; 
    }
        option1= boxes[0]+maxCandies(boxes+2,n-2); //reduce n correctly to how many boxes you skip 
        option2=maxCandies(boxes+1,n-1);     
        return max(option1,option2); 
}
int main(){
    int boxes[] = {3, 2, 5, 10, 7}; 
    int n=sizeof(boxes)/sizeof(boxes[0]);
    int result=maxCandies(boxes,n);
    printf("Maximum boxes that could be collected are: %d",result); 
    return 0; 
}