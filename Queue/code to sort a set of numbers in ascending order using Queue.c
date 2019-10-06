#include <stdio.h>
#define max 5

int queue[max];
int front=-1,rear=-1;

void enqueue(int data){
	if(rear==max-1){
		printf("Overflow");
	}else if(rear==-1 && front==-1){
		rear=front=0;
		queue[rear]=data;
	}else{
		rear++;
		queue[rear]=data;
	}
}

int dequeue(){
	if((front==-1 && rear ==-1 )|| front> rear){
		printf("underflow");
	}else{
		return queue[front++];
	}
}

void display(){
	if((front==-1 && rear ==-1 )|| front> rear){
		printf("underflow");
	}else{
		int i;
		printf("\n");
		for(i=front;i<=rear;i++){
			printf("%d ",queue[i]);
		}
	}
}

sort_asc(){
	int i,j,a;
	
	for(i=front;i<=rear;i++)
	{
		for(j=i+1;j<=rear;j++)
		{
			if(queue[i]>queue[j])
			{
				a=queue[j];
				queue[j]=queue[i];
				queue[i]=a;
			}
		}
		
		
	}
	display();
	
}


main(){
	printf("Enter numbers to be sorted in ascending order\n");
	
	int i,temp;
	for(i=0;i<=max-1;i++){
		printf("Enter Element: ");
		scanf("%d",&temp);
		enqueue(temp);
	}
	printf("Entered elements : ");
	display();
	printf("\nEntered elements in  ascending order : ");
	sort_asc();
}

