#include <iostream>
#include<cmath>
using namespace std;

int removeDuplicate(int arr[],int n)
{
    int result = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[result-1]){
            arr[result]=arr[i];
            result++;
        }
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
