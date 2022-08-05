#include <iostream>
#include<cmath>
using namespace std;

void reverse(int arr[],int n)
{
   for(int i=n-1;i>=0;i--){
    arr[n-1-i]=arr[i];
    arr[i]=arr[n-1-i];

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
