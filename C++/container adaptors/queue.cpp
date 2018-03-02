//queue: FIFO, elements are inserted into one end of container, and extracted from the other end
//empty, size, front, back, push_back, pop_front
#include<iostream>
#include<queue>
using namespace std;
//pop: remove the oldest element
int main()
{
    queue<int> myqueue;
    int myint;
    
    cout<<"Please enter some integers(enter 0 to end:\n";
    
    do{
        cin>>myint;
        myqueue.push(myint);
    }while(myint);
    
    cout<<"myqueue contains: ";
    while(!myqueue.empty())
    {
        cout<<" "<<myqueue.front();
        myqueue.pop();
    }
    cout<<"\n";
    
    queue<int> foo, bar;
    foo.push(10); foo.push(20); foo.push(30);
    bar.push(111); bar.push(222);
    
    foo.swap(bar);
    cout<<"size of foo: "<<foo.size()<<"\n";
    cout<<"size of bar: "<<bar.size()<<"\n";
    
    return 0;
}