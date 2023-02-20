#include <iostream>

using namespace std;

const int maxSize = 100;

template <class t> 
class Stack
{

    int top;
    t item[maxSize];

public:
    Stack()
    {
        top = -1;
    }

    // add new element
    void push(t Element)
    {
        if (top >= maxSize - 1)
        {
            cout << "Error on push ";
        }
        else
        {
            top++;
            item[top] = Element;
        }
    }

    // check if stack is empty or not
    bool isEmpty()
    {
        return top < 0;
    }

    // remove last element
    void pop()
    {
        if (isEmpty())
        {
            cout << "Error on pop";
        }
        else
        {
            top--;
        }
    }

    // before removing the element you need to save its value
    // so you need a reference for this value

    void pop(t &Element)
    {
        if (isEmpty())
        {
            cout << "Error on pop";
        }
        else
        {
            Element = item[top];
            top--;
        }
    }

    // get last element on the top

    void getTopElement(t &stackTop)
    {
        if (isEmpty())
        {
            cout << "Error on Get Top";
        }
        else
        {
            stackTop = item[top];
            cout << stackTop << endl;
        }
    }

    void printStack() {
        cout<< "[";
        for (int i = top; i >= 0; i--)
        {
            cout<< item[i] << " " ;
        }
        cout<< "]";
        cout<< endl;
        
    }
};

int main(int argc, char const *argv[])
{

Stack<string> s;
s.push("Ahmed");
s.push("Amin");
s.push("Hassan");

s.printStack();

    return 0;
}
