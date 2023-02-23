#include <iostream>
#include <assert.h>

using namespace std;

const int maxLength = 100;

class ArrayQueueType
{

    int rear;
    int front;
    int length;
    int arr[maxLength];

public:
    ArrayQueueType()
    {
        front = 0;
        rear = maxLength - 1;
        length = 0;
    }

    bool isEmpty()
    {
        return length == 0;
    }

    bool isFull()
    {
        return length == maxLength;
    }

    void addQueue(int Element)
    {
        if (isFull())
        {
            cout << "Queue full can't enqueue....";
        }
        else
        {
            rear = (rear + 1) % maxLength;
            arr[rear] = Element;
            length++;
        }
    }

    void deleteQueue()
    {
        if (isEmpty())
        {
            cout << "Empty Queue can't dequeue....";
        }
        else
        {
            front = (front + 1) % maxLength;
            --length;
        }
    }

    int frontQueue() // Peek()
    {
        assert(!isEmpty());
        return arr[front];
    }

    int rearQueue()
    {
        assert(!isEmpty());
        return arr[rear];
    }

    int queueSearch(int Element)
    {
        int pos = -1;
        if (!isEmpty())
        {
            for (int i = front; i != rear; i = (i + 1) % maxLength)
            {
                if (arr[i] == Element)
                {
                    pos = i;
                    break;
                }
            }
            if (pos == -1)
            {
                if (arr[rear] == Element)
                {
                    pos = rear;
                }
            }
        }
        else
        {
            cout << "Q is empty ! " << endl;
        }
        return pos;
    }

    void printQueue()
    {
        if (!isEmpty())
        {
            for (size_t i = front; i != rear; i = (i + 1) % maxLength)
            {
                cout << arr[i] << " \n";
            }
            cout << arr[rear];
        }
        else
        {
            cout << "Empty Queue";
        }
    }
};

int main(int argc, char const *argv[])
{

    ArrayQueueType object1;
    object1.addQueue(10);
    object1.addQueue(20);
    object1.addQueue(30);
    object1.addQueue(40);

    // object1.deleteQueue();

    cout << object1.queueSearch(10);

    //    cout << object1.frontQueue();

    // cout << object1.rearQueue();

    // object1.printQueue();

    return 0;
}
