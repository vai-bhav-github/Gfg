#include <iostream>
#include<cmath>
using namespace std;

void leftRotate(int arr[], int n)
{
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void leftRotateFinal(int arr[],int n, int d)
{
    for(int i=0;i<d;i++)
    {
        leftRotate(arr,n);
    }
}
int main()
{
   int arr[10]={1,25,25,0,30,30,30,0,45,74};
   int size = 10;
   leftRotateFinal(arr,size,2);
   for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}
