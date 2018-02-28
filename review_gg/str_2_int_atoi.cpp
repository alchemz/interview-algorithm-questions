//string to integer atoi
/*
Description:
Implement atoi to convert a string to an integer.
Thoughts:
开头的空格-> while(string[i] =="")i++;
正负符号的处理->if(str[i]=='-'|| str[i]=='+') sign=1-2 *(str[i++]=='-') return base*sign
溢出处理
非法输入
*/
class Solution{
public:
	int myAtoi(string str){
		int sign=1, base=0, i=0;
		while(str[i]==' '){i++;}
		if(str[i]=='-'||str[i]=='+'){
			sign=1-2*(str[i++]=='-');
		}
		while(str[i] >= '0' && str[i] <='9'){
			if(base > INT_MAX/10 || (base==INT_MAX/10 &&str[i]-'0'>7)){
				if (sign ==1) return INT_MAX;
				else return INT_MIN;
			}
			base = 10 * base + (str[i++] -'0');
		}
		return base * sign;
	}
};