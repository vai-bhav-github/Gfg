#include <iostream>
#include<cmath>
using namespace std;

// Insertion
int largestElement(int arr[],int n)
{
    int result=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[result]){
            result=i;
        }
    }
    return result;
}


int main()
{
    int hello[6]={111,5,78,36,10,1458};
    cout<<largestElement(hello,4);
    

}
