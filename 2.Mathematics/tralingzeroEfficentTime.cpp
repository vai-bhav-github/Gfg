#include<iostream>
#include<climits>
using namespace std;


int main()
{
   int n;
   cin>>n;

   // We count how many five's are there bcoz five multiply by two is 10 
   // and  two's are more than five.
   int result=0;
   for(int i=5; i<=n; i=i*5){
    result = result + n/i;
   }
   cout<<result;
   return 0;
}
