#pragma once
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node {
public:
	T data;
	shared_ptr<Node<T>> Next;

	Node(T data) {
		this->data = data;
		this->Next = nullptr;
	}

	Node(T data, Node<T> Next) {
		this->data = data;
		this->Next = Next;
	}
};