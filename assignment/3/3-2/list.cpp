#include <iostream>
#include "list.h"

using namespace std;

void LinkedList::Append(int data) {
	auto next = new Node();
	next->data = data;
	auto last = head; 
	if(last == NULL) {
		head = next;
		return;
	}
	for(;last->next != NULL;last = last->next);
	last->next = next;
	return;
}

void LinkedList::Prepend(int data) {
	auto next = new Node();
	next->data = data;
	next->next = head;
	head = next;
}

int LinkedList::Length() {
	int res = 0;
	for(auto i = head;i != NULL;i = i->next,res++);
	return res;
}

void LinkedList::Print() {
	for(auto i = head;i != NULL;i = i->next) {
		cout<<i->data<<' ';
	}
	cout<<'\n';
}
