

#include <iostream>
#include<cmath>
using namespace std;

void display1(int arr[], int n)
{
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void display(int arr[],int size,int element,int capacity,int index)
{
    if(size>=capacity){
        return ;
    }
    for(int i=size-1; i>=index;i--){
        arr[i+1]=arr[i];
    } 
    arr[index]= element;
    
}

int main()
{
    int size = 5,  element = 45, index = 3, capacity=10;
    int arr[10] = {1,4,8,10,65};
    display(arr,size,element,capacity,index);
    size+=1;
    display1(arr, size);
    return 0;
}