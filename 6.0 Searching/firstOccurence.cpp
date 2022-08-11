#include<bits/stdc++.h>
#define int long long

using namespace std;

void INIT() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("error.txt", "w", stderr);
		freopen("output.txt", "w", stdout);
	#endif
}

int firstOccurence(int arr[],int n, int x)
{
    for(int i=0;i<n;i++){
    	if(arr[i]==x){
    		return i;
    	} 

    }
    return -1;
}

int32_t main() {
	INIT();

	//write your code here
	int arr[6] {1,2,2,5,8,9};
	int size = 6, element = 3;
	cout<<firstOccurence(arr,size,element);

	return 0;
}

