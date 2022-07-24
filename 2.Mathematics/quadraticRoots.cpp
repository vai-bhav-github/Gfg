#include <iostream>
#include<cmath>
using namespace std;

int qudraticRoots(int a, int b, int c)
{
    int d = (b*b) - 4*a*c;
    if(d<0)
        cout<<"-1"<<endl;
    else if(d=0){
        int ans1 = (-b/2*a);
       cout<<ans1<<endl;
    } else{
        int ans2 = ((-b+sqrt(d))/2*a);
        int ans3 = ((-b-sqrt(d))/2*a);
        cout<<ans2<<" "<<ans3<<endl;
    }

}


int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    qudraticRoots(a ,b, c);
    return 0; 
}
