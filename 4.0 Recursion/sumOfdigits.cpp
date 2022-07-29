// #include <iostream>
// #include<cmath>
// using namespace std;

// int sumOfDigits(int n)
// {
//     if(n<=9){
//         return n;
//     } 
//   else
//     return sumOfDigits(n/10) + n%10;
// }

// int main()
// {
//     int n;
//     cin>>n;
    
//     cout<<sumOfDigits(n);
//     return 0;

// }



#include <iostream>
#include<cmath>
using namespace std;


int main()
{
    int n;
    cin>>n;
    // cout<<n;
    int result = 0;
   while(n>0){
    result = result + n%10;
    n=n/10;
   }
   cout<<result;
   // return 0;
}


