#include<stdio.h>
#include<string.h>
struct Car {
    char brand[30];
    int mileage; 
    int rental_cost; 
    int seats; 
}; 
void FindMostEfficient(struct Car cars[],int n, char *mostEfficientBrand, float *maxEfficiency){
    *maxEfficiency=0.0; 
    int maxIndex=0; 
    for(int i=0;i<n;i++){
        float efficiency=(float)cars[i].mileage/cars[i].rental_cost*1000;
        if(efficiency>*maxEfficiency){
            *maxEfficiency=efficiency; 
            maxIndex=i;  
        }
    }
    strcpy(mostEfficientBrand,cars[maxIndex].brand);
}
int main(){
    struct Car cars[]={{"Toyota Corolla",16,5000,5},{"Honda City",18,5500,5},{"Suzuki Alto",22,3500,4},{"Kia Sportage",12,8000,7},{"Hyundai Tucson",14,7500,7}};
    int n=sizeof(cars)/(sizeof(cars[0]));
    char mostEfficientBrand[50];
    float maxEfficiency;
    FindMostEfficient(cars,n,mostEfficientBrand,&maxEfficiency); 
    for(int i=0;i<n;i++){
        if(strcmp(cars[i].brand,mostEfficientBrand)==0){
            printf("%s : %d/%d x 1000=%.2f\n",mostEfficientBrand,cars[i].mileage,cars[i].rental_cost,maxEfficiency); 
        }
    } 
    return 0;
}