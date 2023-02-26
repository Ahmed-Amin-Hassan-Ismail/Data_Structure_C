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


    
};

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
