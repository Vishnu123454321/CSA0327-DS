#include<stdio.h>
int linear_search(int arr[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
	if(arr[i]==x)
	return i;
	return-1;
}
int main()
{
	int arr[]={2,3,4,10,40};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=10;
	int result=linear_search(arr,n,x);
	(result==-1)?printf("element is not present in array"):printf("element is present at index %d",result);
	return 0;
}
