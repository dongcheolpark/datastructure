#pragma once
#include <string>
#include <vector>

#define INF 999

using namespace std;

class Graph{
private:
	int size;
	vector<vector<int>> matrix;
public:
	void LoadMatrix(string& filename); 
	void PrintMatrix();
	int GetSize();
	void PrintShortestPathWeight(int pos);
};