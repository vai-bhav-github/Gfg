#include<iostream>
#include<climits>
using namespace std;

int main()
{

    int x,y;
    cin>>x>>y;
    int num=x;
   for(int i=1; i<=y-1; i++){
    num= num*x;
   }
   cout<<num;

    return 0;
}
