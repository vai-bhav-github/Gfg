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

int bSearch(int arr[],int n, int x)
{
    int low=0 , high=n-1;
    while(low<=high){
    	int mid = (low + high )/2;
    	if(arr[mid]==x)
    		return mid;
    	else if(arr[mid]>x)
    		high = mid-1;
    	else
    		low = mid+1;
    }
    return -1;
}

int32_t main() {
	INIT();

	//write your code here
	int arr[6] {1,26,35,48,56,67};
	int size = 6, element = 355;
	cout<<bSearch(arr,size,element);

	return 0;
}

