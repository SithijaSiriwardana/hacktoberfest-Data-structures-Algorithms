#include<iostream>
using namespace std;

void selection_sort(int a[], int n);

int main(){
	
	int n,i;
	cout << "Enter the size of the array : ";
	cin >> n;
	int arr[n];
	for(i=0;i<n;i++){
		cin >> arr[i];
	}
	selection_sort(arr,n);
	for(i=0;i<n;i++){
		cout << arr[i] << " ";
	}
}

void selection_sort(int arr[], int n){
	
	int i,temp,j,index;
	
	for(i=1;i<n-1;i++){
		int min = arr[i-1];
		cout << "min = " << min << endl;
		for(j=i;j<n;j++){
			if(arr[j] < min){
				min = arr[j];
				index = j;
			}
		}
		arr[index] = arr[i-1];
		arr[i-1] = min;		
	}
	
	
}
