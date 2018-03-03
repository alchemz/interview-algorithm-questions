//stack: LIFO, where elements are inserted and extracted only from one end
//empty, size, back, push_back, pop_back
#include <iostream>
#include <stack>
#include <string>
using namespace std;

//emplace: add a new element at top of the stack, above its current top element
//empty: test if the stack size is 0
int main()
{
    stack<string>mystack;
    mystack.emplace("First sentence");
    mystack.emplace("Second sentence");
    mystack.emplace("third sentence");
    
    cout<<"mystack contains:\n";
    while(!mystack.empty())
    {
        cout<<mystack.top()<<"\n";
        mystack.pop();
    }
        
    stack<int> myint;
    int sum(0);
    
    for(int i=1; i<10; i++)  myint.push(i);
    
    while(!myint.empty())
    {   
        sum += myint.top();
        int x = myint.top();
        cout<<x<<" ";
        myint.pop();
    }
    
    cout<<"Total: "<<sum<<"\n";
    
    stack<double> foo, bar;
    foo.push(1.0);
    foo.push(2.0);
    foo.push(30.0);
    
    bar.push(111.0);
    bar.push(12.0);
     
    bar.swap(foo);
    cout<<"size of foo: "<<foo.size()<<endl;
    cout<<"size of bar: "<<bar.size()<<endl;
    
    return 0;
}