#include<iostream>
using namespace std;
class CircularQueue
{
    int *arr;
    int qfront;
    int rear;
    int s;

public:
    CircularQueue(int n)
    {
        s = n;
        arr = new int[s];
        qfront = rear = -1;
    }

    bool enQueue(int value)
    {
        //to check whether the queue if full
        if((qfront == 0 && rear == s-1) || (rear == (qfront-1)%(s-1)))
        {
            cout<<"Queue Full"<<endl;
            return false;
        }
        else if(qfront == -1)  //first element to push
        {
            qfront = rear = 0;
        }
        else if(rear == s-1 && qfront != 0) // to maintain cyclic nature
        {
            rear = 0;
        }
        else
        {
            //normal flow
            rear++;
        }
        //push inside the queue
        arr[rear] = value;
        return true;
    }

    int deQueue()
    {
        if(qfront == -1) // empty Queue
        {
            cout<< " Queue Empty"<<endl;
            return -1;
        }
        int ans = arr[qfront];
        arr[qfront] = -1;
        if(qfront == rear)  //single element
        {
            qfront = rear = -1;
        }
        else if(qfront == s-1)
        {
            qfront = 0;
        }
        else
        {
            //normal flow
            qfront++;
        }
        return ans;
    }
};

int main()
{
    CircularQueue q(5);
    // Inserting elements in Circular Queue
    q.enQueue(10);
    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);

    // Deleting elements from Circular Queue
    printf("\nDeleted value = %d", q.deQueue());
    printf("\nDeleted value = %d", q.deQueue());
    return 0;
}
