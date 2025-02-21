#include<iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

Node* printList(Node* head)
{
	

	while (head != nullptr)
	{
		cout << head->data<<" ";
		head = head->next;
	}
	return head;
}

Node* mergeList(Node* head1,Node* head2)
{
	if (head1 == nullptr) 
	{
		return head2;
	}
	if (head2 == nullptr) 
	{
		return head1;
	}
	struct Node* temp = head1;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = head2;
	return head1;
}

int main()
{ 
	struct Node* head1 = new Node();
	head1->data = 11;
	struct Node* node11 = new Node();
	node11->data = 12;

	struct Node* node12 = new Node();
	node12->data = 13;
	
	struct Node* node13 = new Node();
	node13->data = 14;

	head1->next = node11;
	node11->next = node12;
	node12->next = node13;
	node13->next = nullptr;
	cout << "List 1" << endl;
	printList(head1);

	struct Node* head2 = new Node();
	head2->data = 56;
	struct Node* node21 = new Node();
	node21->data = 89;

	struct Node* node22 = new Node();
	node22->data = 18;

	struct Node* node23 = new Node();
	node23->data = 188;

	head2->next = node21;
	node21->next = node22;
	node22->next = node23;
	node23->next = nullptr;
	cout << "\nList 2" << endl;
	printList(head2);
	
	head1 = mergeList(head1, head2);

	cout << "\nAfter Merging" << endl;

	printList(head1);
	return 0;
}
