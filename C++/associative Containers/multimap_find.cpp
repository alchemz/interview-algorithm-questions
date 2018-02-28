#include <iostream>
#include <string>
#include <map>


using namespace std;


typedef multimap<int, string> innerMap;
multimap<string, innerMap> mainMap;


void insert1(multimap<string, innerMap >::iterator it)
{
  it->second.insert (make_pair (2, "two"));
  it->second.insert (make_pair (5, "five"));
  it->second.insert (make_pair (2, "two"));


}


int main (int argc, char *argv[])
{
  multimap<string, innerMap >::iterator it;


  // First insert an element into outermap
  it = mainMap.insert (make_pair ("1st Element Key", innerMap ()));
  // Now insert elements into innermap
  insert1(it);


  // First insert an element into outermap
  it = mainMap.insert (make_pair ("2nd element Key", innerMap ()));
  // Now insert elements into innermap
  it->second.insert (make_pair (5, "five"));
  it->second.insert (make_pair (1, "one"));
  it->second.insert (make_pair (2, "two"));
  it->second.insert (make_pair (5, "five"));
  it->second.insert (make_pair (5, "five"));


  // Find the key in the mainMap
  it = mainMap.find("2nd element Key");
  if (it != mainMap.end()) {
    cout << "\n Key Found!" << endl;
  } else {
    cout << "\n Key Not Found!" << endl;
  }
}

