#include <iostream>
#include<cmath>
using namespace std;

void leader(int arr[],int n)
{
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                flag=false;
                break;
            }
                        
        }
        if(flag==true){
            cout<<arr[i]<<" ";
        }
    }
}

int main()
{
    int arr[6]={1,2,256,84,76,21};
    int size = 6,index=2;
    leader(arr,size);
    return 0;

}