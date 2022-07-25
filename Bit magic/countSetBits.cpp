
// // //Solution 1
// #include <iostream>
// #include<cmath>
// using namespace std;

// int countSetBit(int n)
// {
//     int result = 0;
//     while(n>0)
//     {
//         n=(n & (n-1));
//         result++;
//     }
//     return result;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<countSetBit(n);
// }


// //Solution 2
#include <iostream>
#include<cmath>
using namespace std;

int countSetBit(int n)
{
    int result = 0;
    while(n>0)
    {
        if(n%2!=0)
            {result++;}
        n=n/2;
    }
    return result;
}

int main()
{
    int n;
    cin>>n;
    cout<<countSetBit(n);

}
