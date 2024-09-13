#include "LinkedList.h"

int main() {
	LinkedList<int> ll1();
	ll1.push_back(10);
	ll1.push_back(5);
	ll1.push_back(10);
	ll1.pop();
	ll1.push(12);
	ll1.push(12);
	ll1.remove_first();
	ll1.print();
	return 0;
}