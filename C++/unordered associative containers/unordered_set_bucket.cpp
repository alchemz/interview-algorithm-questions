#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main(){
	unordered_set<string> myset = {"water","land","ice","foam"};

	for(const string& x: myset){
		cout<< x <<" is in bucket #"<<myset.bucket(x)<<endl;
	}

	unsigned n = myset.bucket_count();
	cout<<"myset has "<<n<<" buckets\n";
	for(unsigned i=0; i<n; i++){
		cout<<"bucket #"<<i <<" contains: ";
		for(auto it = myset.begin(i); it!=myset.end(i); it++){
			cout<<" "<<*it;
		cout<<"\n";
		}
	}
	return 0;
}