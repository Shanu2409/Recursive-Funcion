#include <iostream>
using namespace std;

void osort(int* arr, int n){
	if(n == 1) return ;
	
	swap(arr[0], arr[1]);
	osort(arr+1,n-1);
}

void sort(int* arr, int n){
	if(n == 1) return ;
	
	osort(arr,n);
	
	sort(arr,n-1);
}

void print(int* arr, int n){
	if(n <1) return ;
	
	cout<<arr[0]<<" ";
	
	print(arr+1,n - 1);
}

int main(){
	
	int arr[5] = {5,4,3,2,1};
	
	sort(arr,5);
	
	print(arr,5);
	
	
	return 0;
}
