//a condition variable is an object to block the calling thread util notified to resume
#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
using namespace std;

mutex mtx;
condition_variable cv;
bool ready = false;

void print_id(int id){
    unique_lock<mutex> lck(mtx);
    while(!ready) cv.wait(lck);
    cout<<"thread"<<id<<"\n";
}

void go(){
    unique_lock<mutex> lck(mtx);
    ready = true;
    cv.notify_all();
}

int main()
{
    thread threads[10];
    for(int i=0; i<10; i++)
        threads[i] = thread(print_id, i);
        
    cout<<"10 threads ready to race...\n";
    go();
    
    for(auto& th: threads) th.join();
    
    return 0;
}