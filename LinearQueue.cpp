class linearQueueDataContainer
{
	int start, end;
	int queue[4];
	const int size = sizeof(queue) / sizeof(int);
	public:
		linearQueueDataContainer() :start{ -1 }, end{ -1 }
		{}
		bool isFull()
		{
			if ((end == size - 1)||(start>end))
				return true;
			else
				return false;

		}
		bool isEmpty()
		{
			if (start == -1)
				return true;
			else
				return false;
		}
		void enqueue(int element)
		{
			if (isFull())
			{
				cout << "Queue is Full" << endl;
				return;
			}
			if (isEmpty())
			{
				start = 0;
			}
			end = end + 1;
			queue[end] = element;
		}
		void dequeue( )
		{
			if (isEmpty())
			{
				cout << "Queue is empty" << endl;
			}
			start = start + 1;
			if (start > end)
			{
				start = -1;
				end = -1;
			}
		}
		void getFirst()
		{
			cout << "First element :" << queue[start] << endl;
		}
		void getLast()
		{
			cout << "Last element :" << queue[end] << endl;
		}

};
