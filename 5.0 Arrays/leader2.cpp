#include <iostream>
#include<cmath>
using namespace std;

void leader(int arr[],int n)
{
    int curLea = arr[n-1];
    cout<<curLea<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>curLea){
            curLea=arr[i];
            cout<<curLea<<" ";
        }
    }
}

int main()
{
    int arr[6]={65867,2,256,84,76,21};
    int size = 6,index=2;
    leader(arr,size);
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
    return 0;

}