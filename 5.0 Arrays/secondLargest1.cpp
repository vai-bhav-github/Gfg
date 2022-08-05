#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int hello[8]={111,5,78,36,10,1458,2457,2457};

    int greatest = -1111111;
    int secondLargest= -5111110;
    int size = 8;
    for(int i=0;i<size;i++){
        if(hello[i]>greatest){
            secondLargest=greatest;
            greatest = hello[i];

        }
        else if(hello[i]>secondLargest && hello[i]<greatest){
            secondLargest=hello[i];
        }

    }
    cout<<secondLargest<<endl;
    
return 0;
}
