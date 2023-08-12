#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;
int isEmpty()
{
	return top==-1;
}
 int isFull()
 {
 	return top==MAX_SIZE-1;
 }
   void push(int element)
   {
   	if(isFull())
   
   {
   	 printf("stack isFull\n");
   }
   else
     {
     	top++;
     	stack[top]=element;
	 }
   }
     int pop()
     {
     	if(isEmpty())
     	{
     		printf("stack isEmpty\n");
     		return-1;
		 }
		 else
		 {
		 	int element=stack[top];
		 	top--;
		 	return element;
		 }
	 }
	 int peek()
	 {
	 	if(isEmpty())
	 	{
	 		printf("stack isEmpty\n");
	 		return-1;
		 }
		 else
		 {
		 	return stack[top];
		 }
	 }
	 int main()
	 {
	 	int choice,element,PUSH,POP,PEEK;
	 	while(1)
	 	{
	 		printf("1.PUSH\n");
	 		printf("2.POP\n");
	 		printf("3.PEEK\n");
	 		printf("4.EXIT\n");
	 		printf("enter your choice:");
	 		scanf("%d",&choice);
	 		switch(choice)
	 		{
	 			case 1:
	 				printf("enter the elememt to be pushed:");
	 				scanf("%d",&element);
	 			
	 				break;
	 				case 2:
	 				
	 					if(element!=-1)
	 					{
	 						printf("popped element is %d\n",element);
						 }
						 break;
						 case 3:
						 
						 
						 	if(element!=-1)
						 	{
						 		printf("TOP element is %d\n",element);
							 }
							 break;
							 case 4:
							 	exit(0);
							 	default:
							 		printf("invalid choice\n");
			 }
		 }
		 return 0;
	 }
   
