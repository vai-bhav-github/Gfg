#include <iostream>
#include<cmath>
using namespace std;

void swap(int arr[],int n)
{
   int low=0, high=n-1;
   while(low<high){
    int temp = arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;
    high--;
   }

}

void moveAllzerosToEnd(int arr[],int n)
{
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }
   
}



int main()
{
   int arr[10]={1,25,25,0,30,30,30,0,45,74};
   int size = 10;
   moveAllzerosToEnd(arr,size);
   for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}
