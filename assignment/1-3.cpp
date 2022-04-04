#include <iostream>

using namespace std;

int func(int n,int r) {
	if(r == 0 ||( n == r)) {
		return 1;
	}
	return func(n-1,r-1) + func(n-1,r);
}

int main() {
	int n,r;
	cin>>n>>r;
	cout<<func(n,r);
}