#pragma once
#include <string>
#include <vector>

#define INF 999

using namespace std;

class Graph{
private:
	int size;
	vector<vector<int>> matrix;
	vector<bool> visit;
	vector<int> dist;
	vector<int> from;
	void ShortestPath(int pos);
public:
	void LoadMatrix(string& filename); 
	void PrintMatrix();
	int GetSize();
	void PrintShortestPathWeight(int pos);
	void PrintShortestPath(int pos);
};