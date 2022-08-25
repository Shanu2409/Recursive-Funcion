// use case : when we have to sort a small array or vector and low on space complexity

#include<iostream>
using namespace std;

void print(int* arr, int n){
	for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } cout<<endl;
}

void sortFromR(int* arr, int n){
    if (n == 1) return ;
    
    int i = 1;
    while(i<n){
        if(arr[0]>arr[i]) swap(arr[0], arr[i]);
        i++;
    }


    sortFromR(arr+1, n-1);
}

void sortFromL(int* arr, int n){
    for(int i = 0; i<n-1; i++){
        int min = i;

        for(int j = min+1; j<n; j++){
            if (arr[j] < arr[min]) min = j;
        }

        swap(arr[min], arr[i]);
    }
}

int main()
{
    int arr[] = {4,5,2,6,3,-9,-234,252};
    int n = 8;
    // sortFromR(arr,n);
    // print(arr,n);
    // sortFromL(arr,n);

    // print(arr,n);


    return 0;
}