#include <iostream>
#include <stack>
#include "LoopQueue.h"

namespace mtjStackQueue {
	void reverseQueue(LoopQueue& queue);

	bool matchBrackets(std::string str);
	
}

int main() {

	return 0;
}

namespace mtjStackQueue {
	/// <summary>
	/// 将队列反转
	/// </summary>
	/// <param name="queue"></param>
	void reverseQueue(LoopQueue& queue)
	{
		std::stack<elemtp> stack;
		elemtp data;
		for (; !queue.isEmpty();) {
			queue.pop(data);
			stack.push(data);
		}
		while (!stack.empty()) {
			data = stack.top(); stack.pop();
			queue.push(data);
		}
	}

	/// <summary>
	/// 匹配括号
	/// </summary>
	/// <param name="str"></param>
	/// <returns></returns>
	bool matchBrackets(std::string str) {
		std::stack<char> stck;
		
		for (char ch : str) {
			switch (ch) {
			case '(':
			case '[':
			case '{':
				stck.push(ch);
				break;
			case ')':
				if (stck.empty() || stck.top() != '(') return false;
				stck.pop();
				break;
			case ']':
				if (stck.empty() || stck.top() != '[') return false;
				stck.pop();
				break;
			case '}':
				if (stck.empty() || stck.top() != '{') return false;
				stck.pop();
				break;
			}
		}
		return stck.empty();
	}

	int iterationBasedStack(int n, int x) {
		int fv1, fv0;
		int value;
		std::stack<int> stck;
		fv1 = 2 * x;
		fv0 = 1;

		for (int i = n; i >= 2; --i) {
			stck.push(i);
		}

		while (!stck.empty()) {
			value = 2 * x * fv1 - 2 * (stck.top() - 1) * fv0;
			fv0 = fv1;
			fv1 = value;
			stck.pop();
		}
		return 0 == n ? fv0 : fv1;
	}

	void simulation(LoopQueue& q1, LoopQueue& q2) {

	}
}

