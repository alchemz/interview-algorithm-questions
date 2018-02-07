//convert an integer to a roman numeral
/*
eg.3978
3978/1000 = 3: MMM
978>(1000-100), 998/900=1:CM
78<(100-10), 78/50=1:L
28<(50-10), 28/10=XX
8<(100-1), 8/5=1:V
3<(5-1), 3/1=3:III
ret = MMMCMLXXVIII
I: 1 
IV:4
V:5
IX:9
X:10
XL:40
L:50
XC:90
C:100
CD:400
D:500
CM:900
M:1000
*/
class Solution{
public:
	string intToRoman(int num){
		string dict[13]={"M", "CM","D", "CD","C","XC","L","XL","X","IX","V","IV","I" };
		int val[13]= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
		string result;
		for(int i=0; i<13; i++){
			if(num>=val[i]){
				int count = num/val[i];
				num %= val[i];
				for(int j=0; j<count; j++){
					result.append(dict[i]);
				}
			}
		}
		return result;
	}
};