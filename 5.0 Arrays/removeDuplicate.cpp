#include <iostream>
#include<cmath>
using namespace std;

int removeDuplicate(int arr[],int n)
{
    int temp[n];
    temp[0]=arr[0];
    int result= 1;
    for(int i=1;i<n;i++){
        if(temp[result-1]!=arr[i]){
            temp[result]=arr[i];
            result++;
        }
    }
    for(int i=0;i<result;i++){
        arr[i]=temp[i];
    }
    return result;
}



int main()
{
   int arr[6]={1,25,25,30,30,30};
   int size = 6;
   int ans= removeDuplicate(arr,size);
   for(int i=0; i<ans;i++){
    cout<<arr[i]<<" ";
   }
return 0;
}
