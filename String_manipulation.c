#include<stdio.h>
#include<string.h>
#include<ctype.h>//responsible for toupper() function in c
int main(){
char names[6][50]={{"Sana Malik"}, {"Imran Qureshi"}, {"Nadia Ahmed"},{"Kamran Shah"},{"Hira Butt"},{"Tariq Jamil"}}; 
char code[6][10];
for(int i=0;i<6;i++){
    code[i][0]=names[i][0]; 
    code[i][1]=names[i][1]; 

int j=0; 
while(names[i][j]!=' ' && names[i][j]!='\0'){
    j++; 
}
code[i][2]=names[i][j+1]; 
code[i][3]=names[i][j+2];
code[i][4]=names[i][j+3]; 
strcat(code[i],"ER");
for(int k=0; code[i][k] != '\0'; k++){
    code[i][k] = toupper(code[i][k]);
}
}
char input[20];
while(1){
    printf("Enter a patient code or stop(type STOP)");
    scanf("%s", input);
    if(strcmp(input,"STOP")==0){
        return 0; 
    }
    int found=0; 
    for(int i=0;i<6;i++){
        if(strcmp(input,code[i])==0){
            printf("Patient name: %s\n",names[i]);
            found=1; 
        }
    }
    if(found!=1){
        printf("Patient not found.");
    }
}
return 0; 
}