//5_mergeIntervals.cpp
/*
Given a collection of intervals, merge all overlapping intervals.

For example,
Given [1,3],[2,6],[8,10],[15,18],
return [1,6],[8,10],[15,18].
*/

/*
//Definition for an interval
struct Interval{
	int start;
	int end;
	Interval(): start(0), end(0){}
	Interval(int s, int e):start(s), end(e){}
}
*/
/*
思路：

从Insert Interval那题的解法，我们知道了如何判断两个interval是否重合，如果不重合，如何判断先后顺序。
那么这题就很简单了，首先按照start的大小来给所有interval排序，start小的在前。然后扫描逐个插入结果。
如果发现当前interval a和结果中最后一个插入的interval b不重合，则插入a到b的后面；
反之如果重合，则将a合并到b中。注意要给object排序需要定义一个compare structure作为sort函数的额外参数。

*/
class Solution{
public:
	struct compInterval{
		bool operator()(const Interval &a, const Interval &b) const{
			return a.start<b.start;
		}
	};
	vector<Interval> merge(vector<Interval>& intervals){
		sort(intervals.begin(), intervals.end(), compInterval());
		vector<Interval> result;
		for(int i=0; i<intervals.size(); i++){
			if(result.empty() || result.back().end < intervals[i].start)
				result.push_back(intervals[i]);
			else
				result.back().end = max(result.back().end, intervals[i].end);
		}
		return result;
	}
};