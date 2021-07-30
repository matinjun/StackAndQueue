#pragma once
#include <vector>

typedef int elemtp;

class LoopQueue
{
public:
	LoopQueue():maxsize(100), queue(100), full(false), rear(0), front(0) {}
	LoopQueue(int size):maxsize(size), queue(size), full(false), rear(0), front(0) {}

public:
	bool isEmpty() const { return !full && front == rear; }
	bool isFull() const { return full && front == rear; }
	bool push(elemtp data);
	bool pop(elemtp& data);
	bool getHead(elemtp& data);


private:
	int maxsize;
	int front;
	int rear;
	std::vector<elemtp> queue;
	bool full;
};

