Node* middleList(Node* head)
{
	Node* temp = head;
	int count = 0;

	while (temp != nullptr)
	{
		count++;
		temp = temp->next;
	}
	temp = head;
	int mid = (count / 2) ;

	while (mid != 0)
	{
		temp = temp->next;
		mid--;
	}

	cout << temp->data;
	return temp;
}
