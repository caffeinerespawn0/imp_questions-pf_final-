#include<stdio.h>
int findWord(char dict[][30], int size, char searchWord[]){
    int found=0;
    for(int i=0;i<size;i++){
    int j=0;
    //now comparing char by char
    while(dict[i][j]==searchWord[j] && dict[i][j]!='\0' && searchWord[j]!='\0'){
        j++;
    }
    if(dict[i][j]=='\0' && searchWord[j]=='\0'){
        printf("Word found at index[%d]\n",i);
        found=-1; 
    }
    }
    return found; //word not found
}
int main(){
    char word[30];
    int size;
    int result;
char dictionary[][30]={"Apple","Banana","Computer","Algorithm","Data","Computer"}; 
printf("Enter a word to search:\n");
scanf("%29s",word);
result=findWord(dictionary,6,word);
if(!result){
    printf("Word not found :(\n");
}
    return 0; 
}