#include <iostream>
#include<cmath>
using namespace std;

void reverse(int arr[],int n)
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

int main()
{
   int arr[5]={1,59,86,25,31};
   int size = 5;
   reverse(arr,size);
   for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}
