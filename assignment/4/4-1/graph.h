#pragma once
#include <string>
#include <vector>

using namespace std;

class Graph{
private:
	int size;
	vector<vector<int>> matrix;
public:
	void LoadMatrix(string& filename); 
	void PrintMatrix();
};