#include <iostream>
using namespace std;

int binSearch(int* arr, int s,int e,int k){
	if(s>e) return -1;
	
	int mid = s+(e-s)/2;
	
	if(arr[mid] == k) return mid;
	
	if(k > arr[mid]) return binSearch(arr, mid+1,e,k);
	else return binSearch(arr, s,mid,k);	
}

int main(){
	int arr[8] = {1,2,3,4,5,10,15,20};
	cout<<binSearch(arr,0,4,7);
	
	return 0;
}
