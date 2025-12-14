#include<stdio.h>
#include<ctype.h>
#include<string.h>
int palindrome(char c[],int start,int end){
    if(start>=end){
        return 1;
    }
    if(c[start]!=c[end]){
        return 0;
    }
    else{
    return palindrome(c,start+1,end-1);
    }
}
int main(){
    char c[20]="Racecar";
    int length=strlen(c);
    for(int i=0;i<length;i++){
        c[i]=tolower(c[i]);
    } 
    if(palindrome(c,0,length-1)){
        printf("Palindrome");
    }
    else{
        printf("Not a plaindrome"); 
    }
    return 0;
}