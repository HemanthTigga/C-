//implementation via array
#include<iostream>
#include<queue>
using namespace std;

class Queue
{
    int* arr;
    int qfront;
    int rear;
    int size;

public:
    Queue()
    {
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }

    bool isEmpty()
    {
        if(rear == qfront )
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void enqueue(int data)
    {
        if(rear == size)
        {
            cout<<"queue is full"<<endl;
        }
        else
        {
            arr[rear] = data;
            rear ++;
        }
    }

    int dequeue()
    {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear)
            {
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int Front()
    {
        if(qfront == rear)
        {
            return -1;
        }
        else
        {
            return arr[qfront];
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(12);
    q.enqueue(11);
    q.enqueue(1);
    q.enqueue(110);
    cout<< q.dequeue()<<endl;
    cout<< q.Front()<<endl;
}

// T.C = O(1)
