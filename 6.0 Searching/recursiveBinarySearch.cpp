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

int bSearch(int arr[],int low, int high, int x)
{
    if (low>high)
    	return -1;
	int mid = (low+high)/2;
	if(arr[mid]==x)
		return mid;
	else if(arr[mid]>x)
		return bSearch(arr,low,mid-1,x);
	else
		return bSearch(arr,mid+1,high,x);
}

int32_t main() {
	INIT();

	//write your code here
	int arr[6] {1,26,35,48,56,67};
	int size = 6, element = 56;
	cout<<bSearch(arr,0,size-1,element);

	return 0;
}

