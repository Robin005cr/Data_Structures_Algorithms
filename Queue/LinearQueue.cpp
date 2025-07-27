/*
* project   : https://github.com/Robin005cr/Data_Structures_Algorithms
* file name : LinearQueue.cpp
* author    : Robin CR
* mail id   : robinchovallurraju@gmail.com
* LinkedIn  : https://www.linkedin.com/in/robin-cr/
* portfolio : https://robin005cr.github.io/
*
* Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
* Suggestions for improvements or better methods are always welcome and appreciated.
* I value constructive feedback and aim to continuously improve the quality of the work.
*
*/
#include<iostream>
using namespace std;


class linearQueueDataContainer
{
	int start, end;
	int queue[5];
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
				cout << element <<" cannot be inserted.Queue is Full" << endl;
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
				return;
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
int main()
{
    linearQueueDataContainer q;
    
    
    // 1. Queue is empty
    q.dequeue(); 
    
    // 2. Inserting 4 element and deleting one, print first and last elements
    
    q.enqueue(1);
    q.enqueue(8);
    q.enqueue(84);
    q.enqueue(65);
    q.dequeue();
    
    q.getFirst();
    q.getLast();
    
    //3. Making the queue full and tries to insert again
    
    q.enqueue(99);
    q.enqueue(76);
    
    //4. Dequeue all elements and check that queue is empty
    
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    if(q.isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    
}