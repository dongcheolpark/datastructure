#include <fstream>
#include <iostream>
#include "graph.h"

void Graph::LoadMatrix(string& filename) {
	ifstream is(filename);
	string tmp;
	is>>size;

	matrix.resize(size);
	for(int i = 0;i<size;i++) {
		matrix[i].resize(size);
	}
	
	for(int i = 0;i<size;i++) {
		for(int j = 0;j<size;j++) {
			is>>matrix[i][j];
		}
	}
}

void Graph::PrintMatrix() {
	for(int i = 0;i<size;i++) {
		for(int j = 0;j<size;j++) {
			cout<<matrix[i][j]<<" ";
		}
		cout<<"\n";
	}
}