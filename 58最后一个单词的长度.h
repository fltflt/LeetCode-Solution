#pragma once
#include <vector>
#include <string>

using namespace std;
class Solution {
public:
	int lengthOfLastWord(string s) {
		/* istringstream�ⷨ
		istringstream  ss(s);
		string res;
		while(ss>>res){}
		return res.length();
		*/

		/*����ⷨ*/
		int len = s.length();
		string res = "";
		for (int i = 0; i < len; i++)
		{
			if (s[i] != ' ')//�ǿ��ַ�����res�����ۼ�
				res += s[i];
			if (s[i] == ' '&&s[i + 1] != '\0'&&s[i + 1] != ' ')//��ǰ�ַ�Ϊ��' '���Һ�һ�ַ���Ϊ��ʱ����res������ղ���  ��s[i+1]!=' '��Ϊ�˽��"b   a    "������������������
				res = "";
			else if (s[i + 1] == '\0')//�����˽�����ʱ�����ص�ǰ��res�ĳ���
				return res.length();
		}
		return res.length();

	}
};
