#include <iostream>

using namespace std;

class LinkedList
{

    struct Node
    {

        int item;
        Node *next;
    };

    Node *first;
    Node *last;
    int length;

public:
    LinkedList()
    {
        first = last = NULL;
        length = 0;
    }

    bool isEmpty()
    {
        return length == 0;
    }

    void insertFirst(int elelemt)
    {
        Node *newNode = new Node;
        newNode->item = elelemt;

        if (length == 0)
        {

            first = last = newNode;
            newNode->next = NULL;
        }
        else
        {
            newNode->next = first;
            first = newNode;
        }

        length++;
    }

    void inserLast(int element)
    {
        Node *newNode = new Node;
        newNode->item = element;

        if (length == 0)
        {
            first = last = newNode;
            newNode->next = NULL;
        }
        else
        {
            last->next = newNode;
            newNode->next = NULL;
            last = newNode;
        }
        length++;
    }

    
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
