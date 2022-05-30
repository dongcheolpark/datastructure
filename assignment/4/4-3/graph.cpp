#include <fstream>
#include <iostream>
#include "graph.h"
#include <stack>
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

void Graph::ShortestPath(int pos) {
	visit.resize(size,false);
	dist.resize(size,INF);
	from.resize(size);
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
					from[i] = index;
					pq.push(make_pair(nextDistance,i));
				}
			}
		}
	}
}

void Graph::PrintShortestPathWeight(int pos) {
	ShortestPath(pos);
	for(int i = 0;i<size;i++) {
		cout<<dist[i]<<'\n';
	}
	return;
}

void Graph::PrintShortestPath(int pos) {
	ShortestPath(pos);
	for(int i = 0;i<size;i++) {
		if(pos == i) continue;
		stack<int> s;
		for(int dest = from[i];dest != pos;dest = from[dest]) {
		 	s.push(dest);
		}
		s.push(pos);
		while(!s.empty()) {
			cout<<s.top()<<" ";
			s.pop();
		}
		cout<<i<<'\n';
	}
}