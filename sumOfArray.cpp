#include <iostream>
using namespace std;

int isSorted(int* arr, int n){
	if(n < 0) return 0;
	return arr[0] + isSorted(arr+1, n-1);
}

int main(){
	int arr[5] = {1,2,7,4,5};
	cout<<isSorted(arr,5);
	
	return 0;
}
