#pragma once

class Node;

class LinkedList {
private:
	Node * head = NULL;
	Node * tail = NULL;
public:
	void Append(int data);
	void Prepend(int data);
	int Length();
	void Print();
	void PrintReverse();
};

class Node {
private:
	int data;
	Node * next = NULL;
	Node * prev = NULL;
	friend class LinkedList;
};