//2_sqrt.cpp
/*
题目：计算并返回平方根
思路
*/
class Solution {
public:
    int mySqrt(int x) {
        //some corner cases
        if(x<1)
            return 0;
        else if(x<4)
            return 1;
        else{
            int start=0, end=x/2+1;
            while(start<=end){
                if(x/mid==mid)
                    return mid;
                else if(mid<x/mid){
                    start = mid+1;
                }
                else
                    end = mid-1;
            }
            return end;
        }  
        
    }
};