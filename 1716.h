#include<string>
using namespace std;
class Solution {
public:
	/**
	 * @param S: a string
	 * @return: the minimum number
	 */
	int minFlipsMonoIncr(string &S) {//’‚ «C”Ô—‘
		int len = S.size();
		int min = len;
		int cn0 = 0, cn1 = 0;
		for (int i = 0; i < len; i++) 
		{
			if (S[i] == '0')
				cn0++;
		}
		for (int i = 0; i < len; i++) {
			if (S[i] == '0') 
				cn0--;
			else if (S[i] == '1') 
				cn1++;
			if (S[i] == '1') 
			{
				if (cn0 + cn1 - 1 < min) 
					min = cn0 + cn1 - 1;
			}
			else {
				if (cn0 + cn1 < min) min = cn0 + cn1;
			}
		}
		return min;
	}
};