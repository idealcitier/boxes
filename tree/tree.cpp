#include <iostream>

class Node {
public:
	Node(int value) {
		this->value = value;
	}

	void setLeftNode(Node *node) {
		left = node;
	}

	void setRightNode(Node *node) {
		right = node;
	}

private:
	Node *left;
	Node *right;
	int value;
};

int main() {
    Node *n1 = new Node(1);
    Node *n2 = new Node(1);
    Node *n3 = new Node(1);
    Node *n4 = new Node(1);
}
