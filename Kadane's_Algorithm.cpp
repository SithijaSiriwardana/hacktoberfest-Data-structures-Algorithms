#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long int arr[n];
	for(int i=0;i<n;i++){
	cin>>arr[i];
    }
	long long int global=arr[0];
	long long int current=0;
	for(int i=0;i<n;i++){
	current=max(current+arr[i],arr[i]);
	global=max(global,current);
	}
	cout<<global<<endl;

	return 0;
}