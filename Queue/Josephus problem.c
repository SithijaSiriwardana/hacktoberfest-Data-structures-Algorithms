#include<stdio.h>
#define MAX 1000

int queue[MAX];
int front=-1;
int rear=-1;
int insert(int i){
if(rear==MAX-1){
	printf("queue is full");
}if(front==-1&&rear==-1){
	front=rear=0;
}
else{
 rear=rear+1;

}
queue[rear]=i;

}
int delete(){
	int val;
	if(front==-1||front>rear){
		printf("queue is null");
	}else{
		val=queue[front];
		front=front+1;
		return val;
		if(front>rear){
			front=rear=-1;
		}
	}

}
int main(){
    int size,i,flag,k,l,j,x,y,d,a;
    int number;
    printf("Enter your queue size :");
    scanf("%d",&size);

    for(i=1;i<=size;i++){
        insert(i);
    }

y=size;
    for(j=0;j<y-1;j++){


    flag=delete();
front=0;
    for(k=0;k<=size-2;k++){
        queue[k]=queue[k+1];
    }
        rear--;
        insert(flag);
        printf("\nThe %d eliminate people is : %d",j+1,delete());
     for(a=0;a<=size-2;a++){
        queue[a]=queue[a+1];
    }
size--;
front=0;
rear--;



    }
     printf("\nThe save people is :%d",delete());
return 0;
}
