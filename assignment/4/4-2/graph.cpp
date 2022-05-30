#include <fstream>
#include <iostream>
#include "graph.h"
#include <queue>

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

int Graph::GetSize() {
	return size;
}

void Graph::PrintShortestPathWeight(int pos) {
	vector<bool> visit(size,false);
	vector<int> dist(size,INF);
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
	pq.push(make_pair(0,pos));
	dist[pos] = 0;
	while(!pq.empty()) {
		int distance = pq.top().first;
		int index = pq.top().second;
		pq.pop();
		visit[index] = true;
		for(int i = 0;i<size;i++) {
			int nextDistance = distance + matrix[index][i];
			if(!visit[i]) {
				if(dist[i] > nextDistance) {
					dist[i] = nextDistance;
					pq.push(make_pair(nextDistance,i));
				}
			}
		}
	}
	for(int i = 0;i<size;i++) {
		cout<<dist[i]<<'\n';
	}
	return;
}