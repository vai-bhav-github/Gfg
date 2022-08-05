#include <iostream>
#include<cmath>
using namespace std;

void leftRotate(int arr[], int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]= arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++)
    arr[n-d+i]=temp[i];
}
int main()
{
   int arr[10]={1,25,25,0,30,30,30,0,45,74};
   int size = 10;
   leftRotate(arr,size,2);
   for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}
