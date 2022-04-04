#pragma once
#include <string>
#include <vector>
#include <utility>

class Polynomial
{
private:
	int n;
	std::vector<std::pair<int,int> > arr;
public:
	void LoadPolynomial(std::string);
	void PrintPolynomial();
};

