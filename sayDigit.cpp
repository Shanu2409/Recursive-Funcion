#include<iostream>
using namespace std;

void sayD(int n, string* arr){
    if (n == 0) return ;

    int dig = n % 10;
    
    sayD(n/10, arr);

    cout<<arr[dig]<< " ";
}

int main()
{
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Sx", "Seven", "Eight", "Nine"};
    sayD(32100, arr);
    return 0;
}