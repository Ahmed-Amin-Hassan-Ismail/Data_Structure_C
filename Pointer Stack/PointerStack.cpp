#include <iostream>

using namespace std;

template <class t>
class Stack
{
    struct Node
    {
        t item;
        Node *next;
    };
    Node *top;
    Node *cur;

public:

    Stack()
    {
        top = NULL;
    }

    void push(t Element)
    {
        Node *ElementPtr = new Node;
        if (ElementPtr == NULL)
        {
            cout << "Stack Push can't allocate memory";
        }
        else
        {
            ElementPtr->item = Element;
            ElementPtr->next = top;
            top = ElementPtr;
        }
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack empty on pop";
        }
        else
        {
            Node *temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }

    // return last value when deleting ( Call by reference )
    void pop(t &Element)
    {
        if (isEmpty())
        {
            cout << "Stack empty on pop";
        }
        else
        {
            Element = top->item;
            Node *temp = top;
            top = top->next;
            temp = temp->next = NULL;
            delete temp;
        }
    }

    void getTopStack(t &topStack)
    {
        if (isEmpty())
        {
            cout << "Stack empty on get top";
        }
        else
        {
            topStack = top->item;
        }
    }

    void display()
    {
        cur = top;
        cout << "\nitems in stack : ";
        cout << "[";
        while (cur != NULL)
        {
            cout << cur->item << " ";
            cur = cur->next;
        }
        cout << "]\n";
    }
};

int main(int argc, char const *argv[])
{

    Stack<int> s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);

    s.display();

    return 0;
}
