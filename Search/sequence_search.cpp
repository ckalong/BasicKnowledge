#include "stdafx.h"
#include<search.h>

/*
@brief 1��˳�����

@˵��:˳������ʺ��ڴ洢�ṹΪ˳��洢�����Ӵ洢�����Ա���

@����˼��
˳�����Ҳ��Ϊ���β��ң�������������㷨�������ݽṹ���α���һ�˿�ʼ��
˳��ɨ�裬���ν�ɨ�赽�Ľ��ؼ��������ֵk��Ƚϣ���������ʾ���ҳɹ���
��ɨ�������û���ҵ��ؼ��ֵ���k�Ľ�㣬��ʾ����ʧ�ܡ�

@���Ӷȷ���
���ҳɹ�ʱ��ƽ�����ҳ���Ϊ��������ÿ������Ԫ�صĸ�����ȣ� 
ASL = 1/n(1+2+3+��+n) = (n+1)/2 ;
�����Ҳ��ɹ�ʱ����Ҫn+1�αȽϣ�ʱ�临�Ӷ�ΪO(n);
���ԣ�˳����ҵ�ʱ�临�Ӷ�ΪO(n)��
*/
int SequenceSearch(int a[], int value, int n)
{
	int i;
	for (i = 0; i<n; i++)
		if (a[i] == value)
			return i;
	return -1;
}
