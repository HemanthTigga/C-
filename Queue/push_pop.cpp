#include<iostream>
#include<queue>
using namespace std;
int main()
{
    //create a queue
    queue<int> q;
    q.push(11);
    q.push(15);
    q.push(13);
    cout<<"front element of queue: "<<q.front()<<endl;
    cout<<"Last element of queue: "<<q.back()<<endl;

    cout<<"size of queue: "<<q.size()<<endl;
    q.pop();
    cout<<"size of queue: "<<q.size()<<endl;
    q.pop();
    q.pop();

    if(q.empty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"queue is not empty"<<endl;
    }
}
