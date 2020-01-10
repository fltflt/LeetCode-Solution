#pragma once
#include <iostream>
using namespace std;

int MaxProductAfterCutting(int length)
{
	if (length == 0)
		return 0;
	if (length == 1)
		return 0;
	if (length == 2)
		return 1;
	if (length == 3)
		return 2;

	//������̬����
	int *Product=new int[length+1];
	Product[0] = 0;
	Product[1] = 1;//�ڶ���Ԫ�ش�������Ϊ2�����Ӽ�Ϊ���ɶε���󳤶ȳ˻���
	Product[2] = 2;//������Ԫ�ش�������Ϊ3�����Ӽ�Ϊ���ɶε���󳤶ȳ˻���
	Product[3] = 3;
	int max = 0;
	for (int i=4;i<=length;i++)
	{
		max = 0;
		//��̫��Ϊʲô��i/2
		for (int j=1;j<=i/2;j++)
		{
			int temp = Product[j] * Product[i - j];
			if (max<temp)
				max = temp;

			Product[i] = max;
		}
	}
	max = Product[length];
	delete[] Product;

	return max;
}

int maxProductAfterCutting_solution2(int length)
{
	if (length < 2)
		return 0;
	if (length == 2)
		return 1;
	if (length == 3)
		return 2;
	// �����ܶ�ؼ�ȥ����Ϊ3�����Ӷ�
	int timesOf3 = length / 3;
	//����Ϊ1��2������1��2�������
	// ���������ʣ�µĳ���Ϊ4��ʱ�򣬲����ټ�ȥ����Ϊ3�����ӶΡ�
	// ��ʱ���õķ����ǰ����Ӽ��ɳ���Ϊ2�����Σ���Ϊ2*2 > 3*1��
	if (length - timesOf3 * 3 == 1)
		timesOf3 -= 1;
	
	int timesOf2 = (length - timesOf3 * 3) / 2;
	return (int)(pow(3, timesOf3)) * (int)(pow(2, timesOf2));
}

//���Դ���
//#pragma once
//#include <vector>
//#include <iostream>
//#include "offer_14.h"
//
//int main()
//{
//	int result1 = MaxProductAfterCutting(3);
//	int result2 = MaxProductAfterCutting(4);
//	int result3 = MaxProductAfterCutting(5);
//	int result4 = MaxProductAfterCutting(0);
//	int result5 = MaxProductAfterCutting(1);
//	int result6 = MaxProductAfterCutting(2);
//	int result7 = maxProductAfterCutting_solution2(5);
//	return 0;
//}

