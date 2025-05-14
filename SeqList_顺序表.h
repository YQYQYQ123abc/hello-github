#include<iostream>
using namespace std;//����Ⲣʹ�����ֱ�ӷ����ʹ��

typedef int ElemType;//����˳������������ΪElemType��ʵ�����Ƕ�int����������--int��Ч��ElemType

const int Maxsize = 100;//����˳���Ĵ�С����Ϊ˳�����������Ϊ���������ݽṹ����Ҫ�涨��С

typedef struct {
	ElemType* elem;//��˳���Ԫ�ص��������Ͷ���һ������ַ���������Դ˷�������ռ�
	int length;//��ǰ˳���ĳ��ȣ���С����Ҳ������������Ԫ�صĸ���
}SeqList;//˳���Ķ��壬Ҳ����һ��˳�������Ӧ���еĶ��������Ը��������Լ�����Ӷ���������ѧϰ�ڼ�ఴ��Ҫ������

bool Init(SeqList&);//��ʼ��˳�����ʼ������Ҫʹ�����˳���ĸ��������ڣ�ռ���ڴ�ռ䣩�������Ƿ�������ռ䣬ȷ��˳����С
void DestroyList(SeqList&);//����˳�������ʼ������Ŀռ�����
bool ClearList(SeqList&);//�ÿգ�Ҳ�������˳�������Ԫ����0��NULL
bool ListEmpty(SeqList&);//�ж�˳����ǲ��ǿ�
int ListLength(SeqList&);//��ȡ˳���ĳ��ȣ���С��������Ԫ�صĸ�����
int GetElem(SeqList&, int, ElemType&);//��ȡĳһλ�õ�Ԫ��
void LocateElem(SeqList&, ElemType);//���ĳһԪ�ص�λ��
bool ListInsert(SeqList&, int, ElemType);//����Ԫ��
void ListDelete(SeqList&, int);//ɾ��ָ��λ��Ԫ��
int TraverseList(SeqList&);//����