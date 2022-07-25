
// //Solution 1
// #include <iostream>
// #include<cmath>
// using namespace std;

// void  kthbit(int n, int k)
// {
//     if(n & (1<<(k-1)) != 0)
//         {cout<<"yes"<<endl;}
//         else
//             {cout<<"No"<<endl;}
    
// }

// int main()
// {
//     int n,k;
//     cin>>n>>k;
//     kthbit(n,k);
//     return 1;


// }


//Solution 2
#include <iostream>
#include<cmath>
using namespace std;

void kthbit(int n, int k)
{
    if((n>>(k-1) & 1) ==1)
    {
        cout<<"Yes"<<endl;
    } else {
        cout<<"No"<<endl;
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    kthbit(n,k);
    return 1;

}
