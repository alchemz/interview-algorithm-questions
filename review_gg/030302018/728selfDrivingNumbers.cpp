class Solution{
	//1. create an array for all numbers
	//2. check if self divisble
	//3. return the array
	//brute force
public:
	vector<int> selfDividingNumbers(int left, int right){
		vector<int> res;
		for(int i=left; i<=right; ++i){
			int num=i;
			bool valid=true;
			while(num&&valid){
			    const int r=num%10;
				if(r==0||(i%r!=0))
					valid = false;				
				num=num/10;
			}
			if(valid) res.push_back(i);
		}
		return res;
	}	
};