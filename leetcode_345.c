//leetcode 345
#include<stdio.h>
int isVowel(char c){
    return c=='A'||c=='a'||c=='E'||c=='e'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u'; 
}
int main(){
    char word[]={'h','e','l','l','o'}; 
    int length=sizeof(word)/sizeof(word[0]); 
    int left=0; 
    int right=length-1;
    int temp=0;  
    while(left<=right){
        if(!isVowel(word[left])){
            left++;
            continue;  
        }
        if(!isVowel(word[right])){
            right--; 
            continue; 
        }
        char temp=word[left];
        word[left]=word[right];
        word[right]=temp; 
        left++; 
        right--; 
    }
     for(int i=0; i<length; i++){
        printf("%c", word[i]);
    }
    return 0; 
}