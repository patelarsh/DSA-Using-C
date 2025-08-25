#include<stdio.h>
#define MaxSize 10
int Stack [MaxSize],Top=-1;
int main()
{
	void push();
	void pop();
	void display();
	int choice;
	do{
		

	printf("---------Stack---------");
	printf("\n 1.Push \n 2.Pop \n 3.Display \n 4.Exit\n");
	printf("-----------------------");
	
	printf("\n Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1: push();break;
		case 2: pop();break;
		case 3: display();break;
		default : printf("Invalid Choice !!!");break;
	}
	}while(choice!=4);
	
	
	return 0;
}

void push()
	{
		int n;
		if(Top == MaxSize-1)
		{
			printf("\nStack is Overflow\n");
		}
		else
		{
			printf("Enter Element : ");
			scanf("%d",&n);
			Top++;
			Stack[Top]=n;	
		}
	}
	
void display()
{
	if(Top==-1)
	{
		printf("\nStack in Underflow/Empty\n");
	}
	else
	{
		int i;
		for(i=Top;i>=0;i--)
		{
			printf("%d\n",Stack[i]);	
		}	
	}
}
void pop()
{
	if(Top==-1)
	{
		printf("\nStack is Already Empty\n");
	}
	else
	{
		Top--;	
	}
}
