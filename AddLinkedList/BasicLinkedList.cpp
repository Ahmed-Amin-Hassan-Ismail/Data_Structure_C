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

    void insertAtPosition(int post, int element)
    {
        if (post < 0 || post > length)
        {
            cout << "Out Of Range";
        }
        else
        {
            Node *newNode = new Node;
            newNode->item = element;

            if (post == 0)
            {
                insertFirst(element);
            }
            else if (post == length)
            {
                inserLast(element);
            }
            else
            {

                Node *current = first;

                for (size_t i = 0; i < post; i++)
                {
                    current = current->next;
                }

                newNode->next = current->next;
                current->next = newNode;
                length++;
            }
        }
    }
};

int main(int argc, char const *argv[])
{
    
    return 0;
}
