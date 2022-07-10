#include<stdio.h>
#include<stdlib.h>
typedef struct obj{
    int  flag;// w corresponds to c
    float ratio,x,p,w;

}sack;
void calcks(sack objects[],int   n,float c);
sack* find_maxrat(sack objects[],float  n);
int main (){
    float c;
    int n;
    printf("Enter number of objects : \n");
    scanf("%d",&n);
    sack objects[n];
    printf("Enter the weights and profit of the %d objects \n",n);
    for (int i=0; i<n; i++){
        printf("for object number %d : \n",i+1);
        scanf("%f%f",&objects[i].w,&objects[i].p);
        objects[i].flag =0;
        objects[i].x =0;
    }
    for(int i=0; i<n; i++){
        objects[i].ratio = (objects[i].p)/(objects[i].w); 
    }

    printf("Enter the capacity of the knapsack : \n");
    scanf ("%f",&c);

    calcks(objects,n,c);

    return 0;
}
void calcks(sack objects[],int  n,float c){
    float  sum =0;
    float u=0;
  
    while(u<= c){
        sack *item = find_maxrat(objects,n);

        if(item->w <= c-u){
                item->x =1;                 
                u += item->w;
        }
        else {
            item->x = ((c-u)/item->w); 
            printf("%f",item->x)   ;    
            break;
        }
    }
    printf("\nThe objects in the knapsack are : \n");
    for(int i=0; i<n; i++){
        if(objects[i].x > 0){
            printf("%d \t",i+1);
        }
    }
    printf("\n");
    printf("The max profit is : ");
    for(int i=0; i<n; i++){
        sum += ((objects[i].p)*(objects[i].x));
    }
    printf("%f",sum);
    printf("\n");
}
sack* find_maxrat(sack objects[],float n){
    
    sack *large = &objects[0];
    for(int i=1;i<n;i++){
        if(objects[i].ratio > large->ratio && objects[i].flag != 1){
            large = &objects[i];
        }
    }
    large->flag =1 ;
    return large ;
}