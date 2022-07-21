// Only work when factorial is small

#include <iostream>
using namespace std;

void fact(int a){
    long int factorial = 1;
    for(int i=2; i<=a;i++){
        factorial*=i;
    }
    long int zero = factorial;
    int count = 0;
     while(zero%10==0){
        zero=zero/10;
        ++count;
    }
    
    cout<<count<<" Trailing zero.";

    
}

    

int main()
{
  int n; cin>>n;
   fact(n);
  // cout<<ans<<"Bye"<<endl;
  return 0;
}

