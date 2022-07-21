#include <iostream>
using namespace std;

bool palindrome(int a){
    int c=a;
    int number=0;
    while(a>0){
        int b = a%10;
        number= number*10 + b;
        a=a/10;
    }
    if(number==c)
        return true;
    
    return false;
    
}


int main()
{
 
 int n; cin>>n;
 bool ans=palindrome(n);
 if(ans){
    cout<<"true";
 } else{
    cout<<"false";
 }

}
