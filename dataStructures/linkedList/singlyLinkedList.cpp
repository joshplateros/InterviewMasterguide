//www.codementor.io/@codementorteam/a-comprehensive-guide-to-implementation-of-singly-linked-list-using-c_plus_plus-ondlm5azr

#include <iostream>
// Structure which holds the nodes
struct Node {
	int data;
	Node *next;
}

class List {
	private:
		Node * head;
		Node * tail;
	public:
		List() {
			head = NULL;
			tail = NULL;
		}
		void createNode(int value) {
			Node * temp = new Node;

			temp -> data = value; //Temp's data member now has value

			temp -> next = NULL; //Next node to temp is NULL

			if (head == NULL) { //First node
				head = temp;
				tail = temp; //Head and tail will be same node if only one node
				temp = NULL;
			} else {
				tail -> next = temp; //Insert next node to tail as the new node
				tail = temp; //New tail is the new node
			}
		}

		void display() {
			Node *temp = new Node;
			temp = head;
			while (temp != NULL) {
				std::cout << temp->data << std::endl;
				temp = temp->next;
			}
		}
};

int main() {

}
