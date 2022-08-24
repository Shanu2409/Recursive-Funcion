//prasent or not

#include <iostream>
using namespace std;

bool linearSearch(int* arr, int n,int k){
	if(n < 0) return 0;
	if(arr[0] == k) return 1;
	else return linearSearch(arr+1,n-1,k);
}

int main(){
	int arr[5] = {1,2,7,4,5};
	cout<<linearSearch(arr,5,5);
	
	return 0;
}
