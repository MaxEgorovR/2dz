#pragma once
#include "Node.h"
using namespace std;

template <class T>
class LinkedList {
public:
	shared_ptr<Node<T>> Head = nullptr;
	shared_ptr<Node<T>> Back = nullptr;

	LinkedList(){}

	LinkedList(T value) {
		this->Head = shared_ptr<Node<T>>(new Node<T>(value));
		this->Back = this->Head;
	}

	LinkedList(Node<T> Head) {
		this->Head = Head;
		auto cur = this->Head;
		while (cur->Next != nullptr) {
			cur = cur->Next;
		}
		this->Back = cur;
	}

	void push_back(T value) {
		if (this->Head != nullptr) {
			this->Back->Next = shared_ptr<Node<T>>(new Node<T>(value));
			this->Back = this->Back->Next
		}
		else {
			this->Back = shared_ptr<Node<T>>(new Node<T>(value));
			this->Head = this->Back;
		}
	}

	void push(T value) {
		if (this->Head != this->Back) {
			auto cur = this->Head;
			this->Head = shared_ptr<Node<T>>(new Node<T>(value));
			this->Head->Next = cur;
		}
		else {
			auto cur = this->Head;
			this->Head = shared_ptr<Node<T>>(new Node<T>(value));
			this->Head->Next = cur;
			this->Back = this->Head->Next;
		}
	}

	void pop() {
		auto cur = this->Head;
		while (cur->Next != this->Back) {
			cur = cur->Next;
		}
		this->Back = cur;
	}

	void remove_first() {
		this->Head = this->Head->Next;
	}

	void print() {
	auto cur = this->Head;
	while (cur->Next != nullptr) {
		cout << cur->data << " ";
		cur = cur->Next;
	}
	cout << endl;
	}
};
