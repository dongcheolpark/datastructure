#include <iostream>
#include "list.h"

using namespace std;

void LinkedList::Append(int data) {
	auto next = new Node();
	next->data = data;
	if(tail == NULL) {
		head = next;
		tail = next;
		return;
	}
	tail->next = next;
	next->prev = tail;
	tail = next;
	return;
}

void LinkedList::Prepend(int data) {
	auto next = new Node();
	next->data = data;
	if(head == NULL) {
		head = next;
		tail = next;
		return;
	}
	next->next = head;
	next->next->prev = next;
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

void LinkedList::PrintReverse() {
	for(auto i = tail;i != NULL;i = i->prev) {
		cout<<i->data<<' ';
	}
	cout<<'\n';
}