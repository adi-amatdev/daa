#include<stdio.h>
#include<stdlib.h>
int bin(int l, int h, int key,int a[]){
	int mid ;
	mid = (l+h)/2;
	if( mid <key )
		bin(mid+1,h,key,a);
	else if( mid <key )
		bin(l,mid-1,key,a);
		
	else if(mid == key)
		return 1;	
}

int main(){
 	
 	int big,a[100],i,n,key;
 	printf("\nEnter the number of elements : \n");
 	scanf("%d",&n);
 	printf("Enter %d elements : \n",n);
 	for(i=0 ; i<n; i++)
 		scanf("%d",&a[i]);
 	printf("\nEnter the key to be searched :\n");
 	scanf("%d",&key);
 	int low = a[0], high = a[n-1];
 	if(bin(low,high,key,a)){
 		printf("\nThe search was succesful \n");
 		exit(0);
 	}
 	printf("The search was unsuccessful \n");
 	
 	return 0;
}