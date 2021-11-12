#pragma once
template <typename T>
class Node
{
public:
	T value;
	Node<T>* next;
	Node<T>* prev;

	Node() { next = nullptr; prev = nullptr; };
	~Node() { };
};
