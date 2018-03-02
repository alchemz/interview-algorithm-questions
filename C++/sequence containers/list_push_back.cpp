//lists are sequence containers that allow constant time insert and erase operations anywhere within the sequence.
//iterations in both directions.
//list::back, returns a reference to the last element in the list container
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> mylist;
    mylist.push_back(10);
    
    while(mylist.back() !=0){
         mylist.push_back(mylist.back()-1);
    }
    cout<<"mylist contains:";
    for(list<int>::iterator it=mylist.begin(); it!=mylist.end(); ++it)
        cout<<' '<<*it;
        
    
    return 0;
}