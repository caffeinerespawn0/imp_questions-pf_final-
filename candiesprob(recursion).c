//adding the candies of main box w sub-boxes
#include<stdio.h>
int candy(int mainbox, int subbox[],int nSub){
    if(nSub==0){
        return mainbox; 
    }
    else{
        return mainbox+subbox[0]+candy(0,subbox+1,nSub-1);
    }
}
int main(){
    int mainbox=5; 
    int subbox[]={3,2,4};
    int nSub=sizeof(subbox)/sizeof(subbox[0]);
    printf("Number of candies: %d",candy(mainbox,subbox,nSub));
    return 0; 
}