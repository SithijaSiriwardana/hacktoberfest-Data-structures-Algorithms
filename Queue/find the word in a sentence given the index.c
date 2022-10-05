#include <stdio.h>
#include<string.h>
#define MAX 1000
char queue[MAX];
int front=-1;
int rear=-1;

char insert(char i){
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
char delete(){
	char val;
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
void display(){
    int k;
    printf("\n");
for(k=front;k<=rear;k++){
    printf("%s ",queue[k]);
}
}
int main(){
	char array[MAX];
	int h,k,n,g,s,j,m=1,d=0;
	printf("\nEnter your input string :");
	gets(array);
	printf("\nEnter your kth value: ");
	scanf("%d",&k);

	for(h=0;h<strlen(array);h++){
		if(array[h]==' '){
            m++;
			insert(array[h]);
		}else{
			insert(array[h]);
		}
	}

        n=m-k;
	for(j=0;j<strlen(array);j++){
       if(delete()==' '){
        d++;
       }
       if(d==n){
        break;
       }
	}

	printf("Output is :");
if(n>0){
	for(g=front;g<strlen(array);g++){
        if(array[g]==' '){
            break;
        }else{
        printf("%c",array[g]);
        }
	}}else{
	for(s=0;s<strlen(array);s++){
        if(array[s]==' '){
            break;
        }else{
        printf("%c",array[s]);
        }
	}
	}
return 0;
}