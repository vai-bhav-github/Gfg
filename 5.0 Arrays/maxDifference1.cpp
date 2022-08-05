#include <iostream>
#include<cmath>
using namespace std;

int leader(int arr[],int n)
{
    int result = arr[1]-arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            result = max(result,arr[j]-arr[i]);
        }
    }
    return result;
}

int main()
{
    int arr[6]={12,2,256,84,76,21};
    int size = 6,index=2;
    cout<<leader(arr,size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;

}