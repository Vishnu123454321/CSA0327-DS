#include<stdio.h>
#define SIZE 10

int hash(int key)
{
	return key % SIZE;
}
int probe(int H[],int key)
{
	int index=hash(key);
	int i=0;
	while(H[(index+i)%SIZE]!=0)
	{
		i++;
	}
	return(index+i)%SIZE;
}
void insert(intH[],int key)
{
	int index=hash(key);
	if(H[index!=0])
	{
		index=probe(H,key);
	}
	H[index]=key;
}
int search(int H[],int key)
{
	int index=hash(key);
	int i=0;
	while(H[(index+i)%SIZE]!=key)
	{
		i++;
		if(H[(index+1)%SIZE]!==0)
		{
			return-1;
		}
	}
	return(index+1)%SIZE;
}
void display(intH[])
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%d",H[i]);
	}
	printf("\n");
	
}
int main()
{
	int HT[SIZE]={0};
	insert(HT,12);
	insert(HT,25);
	insert(HT,35);
	insert(HT,26);
	insert(HT,15);
	display(HT);
	printf("key found at index %d\n",search(HT,25));
	printf("key not found\n");
	return 0;
}
