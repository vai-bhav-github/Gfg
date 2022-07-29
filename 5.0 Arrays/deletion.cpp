

#include <iostream>
#include<cmath>
using namespace std;

void display(int arr[], int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void delection(int arr[], int size, int index)
{
    for(int i=index; i<size-1;i++){
         arr[i] = arr[i+1];
    }
}
int main()
{
    int arr[100]={1,36,257,27,378};
    int size = 5 ,index=1;
    display(arr, size);
    cout<<endl;
    delection(arr,size,index);
    size-=1;
    display(arr, size);
    return 0;
}