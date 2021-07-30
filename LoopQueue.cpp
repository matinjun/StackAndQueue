#include "LoopQueue.h"

bool LoopQueue::push(elemtp data)
{
	if (isFull()) return false;
	queue[rear] = data;
	rear = (rear + 1) % maxsize;
	full = true;
	return true;
}

bool LoopQueue::pop(elemtp& data)
{
	if (this->isEmpty()) return false;
	data = queue[front];
	front = (front + 1) % maxsize;
	full = false;
	return true;
}

bool LoopQueue::getHead(elemtp& data)
{
	if (this->isEmpty()) return false;
	data = queue[front];
	return true;
}
