#include<stdio.h>
int main()
{
	int num[10],i;
	printf("enter 10 numbers");
	for(i=0;i<10;i++)
	scanf("%d",&num[i]);
	printf("\neven numbers are:\n");
	for(i=0;i<10;i++)
	 {
	 	if(num[i]%2==0)
	 	printf("%d",num[i]);
	 }
	 printf("\nodd numbers are :\n");
	 for(i=0;i<10;i++)
	 {
	 	if(num[i]%2!=0)
	 	printf("%d",num[i]);
	 	
	 }
	 return 0;
}
