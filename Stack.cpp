#include <iostream>
using namespace std;
class stackDataContainer
{
    int top;
    int stack[10];
    int size = sizeof(stack)/sizeof(int);
    public:
    stackDataContainer():top{-1}
    {
    
    }
    bool isEmpty()
    {
        if(top == -1)
            return true;
        else 
            return false;
    }
    bool isFull()
    {
        
        if(top == size-1)
            return true;
        else
            return false;
    }
    void getTop()
    {
        if(!isEmpty())
            cout<<"Top element :"<<stack[top]<<endl;
        else
            cout<<"The stack  is empty"<<endl;    
    }
    void push(int element)
    {
        if(!isFull())
        {
            top = top+1;
            stack[top] = element;
        }
        else
        {
            cout<<"OverFlow:The stack is full"<<endl;
        }
    }
    void pop()
    {
        if(!isEmpty())
        {
         top = top-1;
        }
        else
        {
            cout<<"Under flow :The stack is empty"<<endl;
        }
    }
};

int main()
{
    stackDataContainer stack1;
    stack1.push(3);
    stack1.push(5);
    stack1.pop();
    stack1.getTop();
    stack1.pop();
    stack1.getTop();
    stack1.pop();
    return 0;
}
