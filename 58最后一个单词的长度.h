#pragma once
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
	int lengthOfLastWord(string s) {
		/* istringstream解法
		istringstream  ss(s);
		string res;
		while(ss>>res){}
		return res.length();
		*/

		/*常规解法*/
		int len = s.length();
		string res = "";
		for (int i = 0; i < len; i++)
		{
			if (s[i] != ' ')//非空字符，对res进行累加
				res += s[i];
			if (s[i] == ' '&&s[i + 1] != '\0'&&s[i + 1] != ' ')//当前字符为空' '，且后一字符不为空时，对res进行清空操作  【s[i+1]!=' '是为了解决"b   a    "这种奇葩的输入情况】
				res = "";
			else if (s[i + 1] == '\0')//当到了结束符时，返回当前的res的长度
				return res.length();
		}
		return res.length();

	}
};
