#include <iostream>
using namespace std;

void print(int* arr, int n);

void merge(int *arr, int s, int e) {
    int mid = s+(e-s)/2;

    int l1 = mid - s + 1;
    int l2 = e - mid;

    int* ar1 = new int[l1];
    int* ar2 = new int[l2];

    int k = s;
    
    for(int i = 0; i < l1; i++) ar1[i] = arr[k++];

    for(int i = 0; i < l2; i++) ar2[i] = arr[k++];

    int i = 0;
    int j = 0;
    k = s;

    while(i < l1 && j < l2){
        if (ar1[i] < ar2[j]) arr[k++] = ar1[i++];
        else arr[k++] = ar2[j++];
    }

    while (i < l1) arr[k++] = ar1[i++];
    while (j < l2) arr[k++] = ar2[j++];
}

void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
        return;
    // print(arr,e+1);
    int mid = s + (e-s) / 2;

    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}

void print(int* arr, int n){
	for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    } cout<<endl;
}

int main()
{
    int arr[] = {4,6,2,7,1};
    int n = 5;
    mergeSort(arr, 0, n-1);

    print(arr,n);

    return 0;
}