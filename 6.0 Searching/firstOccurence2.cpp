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
    int low =0, high = n-1;
    while(low<=high){
    int mid = (low+high)/2;
    if(arr[mid]>x)
    	high=mid-1;
    else if(arr[mid]<x)
    	low=mid+1;
    else{
    	if(mid==0 || arr[mid-1]!=arr[mid])
    		return mid;
    	else
    		high=mid-1;
    }
}
	return -1;
}

int32_t main() {
	INIT();

	//write your code here
	int arr[6] {1,2,2,5,9,9};
	int size = 6, element = 9;
	cout<<firstOccurence(arr,size,element);

	return 0;
}

