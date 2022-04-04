#include "polynomial.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void Polynomial::LoadPolynomial(std::string filename) {
	std::ifstream fin(filename);
	std::string str;
	std::istringstream strin(str);
	std::getline(fin,str);
	strin.str(str);
	strin>>n;
	for(int i = 0;i<n;i++) {
		int a = 0,b = 0;
		std::getline(fin,str);
		std::istringstream stri(str);
		stri>>a>>b;
		arr.push_back(std::make_pair(a,b));
	}
	fin.close();
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<n;j++) {
			if(arr[i].second > arr[j].second) {
				auto tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

void Polynomial::PrintPolynomial() {
	for(int i = 0;i<n;i++) {
		std::cout<<arr[i].first<<' '<<arr[i].second<<'\n';
	}
}