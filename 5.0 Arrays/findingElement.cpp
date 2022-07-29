    

#include <iostream>
#include<cmath>
using namespace std;


int search(int arr[], int n,int x)
{
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<arr[i]<<" ";
            return i;
        }
       
            
    }
    return -1;
}
int main()
{   
    int n = 4;
    int x =5;
    int arr[] = {4,5,6,7};
    cout<<search(arr,10,0);
    return 0;
}