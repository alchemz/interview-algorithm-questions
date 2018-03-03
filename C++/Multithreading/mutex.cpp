//mutex is a locable object that is designed to signal when critical sections
//of code need exclusive access, preventing other threads with the same 
//protection from executing concurrently and access the same memory locations

#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

mutex mtx; //mutex for critical section

void print_block(int n, char c){
    //critical section(exclusive access to cout signaled by locking mtx)
    mtx.lock();
    for(int i=0; i<n; ++i){cout<<c;}
    cout<<"\n";
    mtx.unlock();
}

int main()
{
    thread th1(print_block, 5, '*');
    thread th2(print_block, 5, '$');
    
    th1.join();
    th2.join();
    
    return 0;
}
