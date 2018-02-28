#include <iostream>
#include <string>
#include <map>

using namespace std;

typedef multimap<int, string> innerMap;
multimap<double, innerMap> mainMap;

void print()
{
  multimap<double, innerMap >::iterator it;
  multimap<int, string>::iterator inner_it;

  for ( it=mainMap.begin() ; it != mainMap.end(); it++ ) {
    cout << "\n\nNew element\n" << (*it).first << endl;
    for( inner_it=(*it).second.begin(); inner_it != (*it).second.end(); inner_it++)
      cout << (*inner_it).first << " => " << (*inner_it).second << endl;
  }
}

void insert1(multimap<double, innerMap >::iterator it)
{
  it->second.insert (make_pair (2, "two"));
  it->second.insert (make_pair (5, "five"));
  it->second.insert (make_pair (2, "two"));

}

int main (int argc, char *argv[])
{
  multimap<double, innerMap >::iterator it;

  // First insert an element into outermap
  it = mainMap.insert (make_pair (2.4, innerMap ()));
  // Now insert elements into innermap
  insert1(it);

  // First insert an element into outermap
  it = mainMap.insert (make_pair (0.6, innerMap ()));
  // Now insert elements into innermap
  it->second.insert (make_pair (5, "five"));
  it->second.insert (make_pair (1, "one"));
  it->second.insert (make_pair (2, "two"));
  it->second.insert (make_pair (5, "five"));
  it->second.insert (make_pair (5, "five"));

  // print elements in the mainMap
  print();   
}

