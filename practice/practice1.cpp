#include <iostream>

using namespace std;
void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

int GCD(int a, int b) {
	if(a%b == 0) return b;
	return GCD(b,a%b);
}

void Hanoi(int n, char from, char by, char to) {
	if(n == 1) {
		std::cout<<from<<"=>"<<to<<'\n';
		return;
	}
	Hanoi(n-1,from,to,by);
	std::cout<<from<<"=>"<<to<<'\n';
	Hanoi(n-1,by,from,to);
}

int Fibo(int n) {
	if(n == 1||n == 2) return 1;
	return Fibo(n-1) + Fibo(n-2);
}

int main() {
	std::cout<<Fibo(6);
}