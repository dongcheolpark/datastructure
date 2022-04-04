#include <iostream>

using namespace std;
int n;

void func(int x,char * str) {
	if(x == 0) {
		cout<<str<<'\n';
		return;
	}
	str[n-x] = 'a';
	func(x-1,str);
	str[n-x] = 'b';
	func(x-1,str);
}

int main() {
	cin>>n;
	char * str = new char[16];
	func(n,str);
	delete [] str;
}