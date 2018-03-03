//automic types are types that encapsulate a value whose access is guaranteed to not 
//cause data racs and can be used to synchronize memory accesses among different
//threads

//using atomic_flag as a lock
#include<iostream>
#include<atomic>
#include<thread>
#include<vector>
#include<sstream>

using namespace std;
atomic_flag lock_stream = ATOMIC_FLAG_INIT;
stringstream stream;

void append_number(int x)
{
    while(lock_stream.test_and_set()){}
    stream<<"thread#"<<x<<"\n";
    lock_stream.clear();
}

int main()
{
    vector<thread>threads;
    for(int i=1; i<=10; i++) threads.push_back(thread(append_number, i));
    for(auto& th: threads) th.join();
    
    cout<<stream.str();
    return 0;
}