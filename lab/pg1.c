#include<stdio.h>

int add(int n , int a[]){
	
	static int sum=0;
	if(n < 0)
		return sum;
	return sum+a[n]+add(n-1,a);
}

int main(){
	
	int a[100], n,i;
	printf("\nEnter the number of elements : \n");
	scanf("%d",&n);
	printf("\nEnter %d elements : \n",n);	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);	
	printf("The sum is : %d \n",add(n,a));
}