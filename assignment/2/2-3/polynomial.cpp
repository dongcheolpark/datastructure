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
	sort();
	fin.close();
}

void Polynomial::sort() {
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

void Polynomial::add(Polynomial a,Polynomial b) {
	int n1 = a.getSize();
	int n2 = b.getSize();

	auto arr1 = a.getData();
	auto arr2 = b.getData();
	for(int i = 0;i<n2;i++) {
		arr1.push_back(arr2[i]);
	}

	for(int i = 0;i<n1+n2;i++) {
		bool chk = true;
		for(auto j = arr.begin();j<arr.end();j++) {
			if(arr1[i].second == j->second) {
				j->first += arr1[i].first;
				if(j->first == 0) {
					arr.erase(j);
				}
				chk = false;
				break;
			}
		}
		if(chk) {
			arr.push_back(arr1[i]);
		}
	}
	n = arr.size();
	sort();
}