#include<stdio.h>
struct item{
    char dish[30];
    int price; 
    int cost;
    int time; 
}; 
void highestMargin(struct item items[], int n,float *hMargin,int *highestIndex){  
    for(int i=0;i<n;i++){
        float margin=(float)(items[i].price-items[i].cost)/(items[i].cost);
        if(margin>*hMargin){
            *hMargin=margin; 
            *highestIndex=i; 
        } 
    }
}
int main(){
    struct item items[]={{"Chicken Biryani", 450,180,45},{"Beef Pulao",350,120,20},{"Pasta Alfredo",400,100,30},{"Fish Tikka",550,250,35},{"Veggie Pizza",500,150,25}}; 
    float hMargin=0; 
    int highestIndex=0;
    int n=sizeof(items)/(sizeof(items[0]));
    highestMargin(items,n,&hMargin,&highestIndex);
    printf("%s: (%d - %d) / %d = %.2f: ",items[highestIndex].dish,
                items[highestIndex].price,
                items[highestIndex].cost,
                items[highestIndex].cost,
                hMargin);
    return 0; 
}
