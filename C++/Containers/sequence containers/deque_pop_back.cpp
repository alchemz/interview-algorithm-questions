#include<iostream>
#include<deque>
using namespace std;
//pop_back: return the last element in the deque container
//push_back: add a new element at the end of deque container
int main(){
    deque<int> mydeque;
    int sum(0);
    mydeque.push_back(10);
    mydeque.push_back(20);
    mydeque.push_back(30);
    
    while(!mydeque.empty())
    {
        sum+=mydeque.back();
        mydeque.pop_back();
    }
    cout<<"The elements of mydeque add up to "<<sum<<"\n";
    cout<<"The final size of mydeque is: "<<mydeque.size();
    
    int myint;
    cout<<"Please enter some integers: \n";
    do{
        cin>>myint;
        mydeque.push_back(myint);
    }while(myint);
    
    cout<<"The final size of mydeque is "<<(int)mydeque.size();
    return 0;
}