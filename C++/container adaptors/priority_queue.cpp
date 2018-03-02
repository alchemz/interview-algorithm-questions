#include<iostream>
#include<queue>
#include<string>
using namespace std;
//emplace: construct and insert element
//top: the element compare higher in the priority_queue
int main(){
    priority_queue<string> mypq;
    
    mypq.emplace("orange");
    mypq.emplace("strawberry");
    mypq.emplace("apple");
    mypq.emplace("pear");
    
    cout<<"mypq contains: ";
    while(!mypq.empty())
    {
        cout<<' '<<mypq.top();
        mypq.pop();
    }
    cout<<'\n';
    
    priority_queue<int> myint;
    myint.push(1);
    myint.push(-1);
    myint.push(22);
    cout<<"myint.top is now: "<<myint.top()<<"\n";
    return 0;
}