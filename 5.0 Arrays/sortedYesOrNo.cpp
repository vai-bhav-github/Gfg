#include <iostream>
#include<cmath>
using namespace std;

int sorted(int arr[],int n)
{
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                return -1;
            }
        }
       
    }
    return 1;
}

int main()
{
    int arr[5]= {2,5,10,25,6};
    int size=5;
    cout<<sorted(arr,5);

return 0;
}
