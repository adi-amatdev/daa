#include<stdio.h>
 
 int main(){
 	
 	int big,a[100],i,n;
 	printf("\nEnter the number of elements : \n");
 	scanf("%d",&n);
 	printf("Enter %d elements : \n",n);
 	for(i=0 ; i<n; i++)
 		scanf("%d",&a[i]);
 	i=0;
 	big = a[i];
 	for(i=0;i<n;i++){
		
		if(big < a[i+1])
			big = a[i+1];
	}
	printf("\nThe largest elements is : %d\n",big);
	return 0;
 }