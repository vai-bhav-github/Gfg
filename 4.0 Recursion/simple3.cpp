#include <iostream>
#include<cmath>
using namespace std;

void fun(int n)
{
    if(n==0)
    {
        return;
    }
    fun(n-1);
    cout<<n<<endl;
    fun(n-1);
}
int main()
{
    int n;
    cin>>n;
    fun(n);
    return 0;
}