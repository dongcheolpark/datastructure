#include <iostream>

using namespace std;	

int n;
int ans;
int * arr;

void binary_search() {
	int left = 0, right = n-1;
	int res = -1;
	int resMidCnt = 0;
	while(left <= right) {
		int mid = (left+right)/2;
		resMidCnt++;
		if(arr[mid] == ans) {
			res = mid;
			break;
		}
		else if(arr[mid] > ans) {
			right = mid;
		}
		else {
			left = mid+1;
		}
	}
	cout<<res<<'\n'<<resMidCnt;
}

int main() {
	cin>>n;
	arr = new int[n];
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	cin>>ans;
	binary_search();
	delete [] arr;
}