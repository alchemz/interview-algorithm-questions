//future head with facilities that allow asynchronous access to value set
//by specific providers, in a different thread.
#include<iostream>
#include<functional>
#include<thread>
#include<future>
using namespace std;

void print_int(future<int>& fut){
    int x = fut.get();
    cout<<"value: "<<x<<"\n";
}

int main()
{
    //create promise
    promise<int> prom;
    //engagement with future
    future<int> fut = prom.get_future();
    //send future to new thread
    thread th1(print_int, ref(fut));
    //fulfill promise
    prom.set_value(10);
    //synchronizes with getting the future
    th1.join();
    return 0;
}