#pragma once
#include <string>
#include <utility>

class Polynomial
{
private:
	int n;
	std::pair<int,int> * arr;
public:
	Polynomial();
	void LoadPolynomial(std::string);
	void PrintPolynomial();
};

