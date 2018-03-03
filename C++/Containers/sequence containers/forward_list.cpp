#include<forward_list>
#include<iostream>
using namespace std;

//forward_list are sequence containers that allow constant time insert and erase operations anywhere within sequence
//implemented as singly-linked lists.

int main(){
    forward_list<int> mylist = {20, 30, 40, 50};
    mylist.insert_after(mylist.before_begin(), 11);//insert before the existed first element
    
    cout<<"mylist contains: ";
    for(int& x: mylist) cout<<' '<<x;
    cout<<'\n';
    
    return 0;
}