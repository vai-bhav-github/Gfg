#include <iostream>
#include<cmath>
using namespace std;

void removeDuplicate(int arr[],int n)
{
    // for(int j=0;j<n;j++){
    for(int i=0;i<n;i++){
        int temp=arr[i];
        if(arr[0]!=arr[i]){
            arr[0+1]=temp;
        }
    }
}



int main()
{
   int arr[6]={1,25,25,30,30,30};
   int size = 6;
   removeDuplicate(arr,size);
   for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}
