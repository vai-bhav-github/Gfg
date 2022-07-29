

#include <iostream>
#include<cmath>
using namespace std;

void towerOfHanoi(int n , char A, char B, char C)
{
    if(n==1){
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;
        return;
    } else{
        towerOfHanoi(n-1,A,C,B);
        cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
        towerOfHanoi(n-1,B,A,C);
    }
}

int main()
{
    int n;
    char A,B,C;
    cin>>n>>A>>B>>C;
    towerOfHanoi(n,A,B,C);
    return 0;


}

