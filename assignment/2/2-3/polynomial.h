#pragma once
#include <string>
#include <vector>
#include <utility>

class Polynomial
{
private:
	int n;
	std::vector<std::pair<int,int> > arr;
	void sort();
public:
	void LoadPolynomial(std::string);
	void PrintPolynomial();
	void add(Polynomial a, Polynomial b);
	int getSize() {return n;}
	std::vector<std::pair<int,int> > getData() {return arr;}
};

