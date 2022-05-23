#pragma once

class Node;

class LinkedList {
private:
	Node * head = NULL;
public:
	void Append(int data);
	void Prepend(int data);
	int Length();
	void Print();
};

class Node {
private:
	int data;
	Node * next;
	friend class LinkedList;
};