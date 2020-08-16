//Most code from Geekforgeeks

#include <iostream>

class Node {
	public:
		int data;
		Node *next;
};

void push(Node ** head_ref, int new_data) {
	//Allocate first
	Node * new_node = new Node();
	//Put in the data
	new_node->data = new_data;
	//Next of new node is the head
	new_node->next = (*head_ref);
	//Move head to point to the new node
	(*head_ref) = new_node;

}

void printList(Node* node) {
	while (node != NULL) {
		std::cout << node->data;
		node = node->next;
	}
}
int main() {
	Node * head = NULL;

	push(&head, 6);

	printList(head);


}
