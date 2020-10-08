#include<stdio.h>

void insertion_sort(int a[], int b);

int main(){
	
	int n,i;
	printf("Enter array size : ");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	insertion_sort(arr,n);
	
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
//	int array[]
}

void insertion_sort(int arr[],int n){
	
	int i,j,key;
	
	for(i=1;i<n;i++){
		key = arr[i];
		for(j=i-1;j>=0;j--){
			if(arr[j] > key){
				arr[j+1] = arr[j];
				arr[j] = key;
			}
		}
	}
	
}
