#include"SeqList_˳���.h"
int main()
{
	SeqList L;
	ElemType e;
	Init(L);
	TraverseList(L);//����
	cout << "˳���ĳ���Ϊ��" << ListLength(L) << endl;
	cout << "˳�����пղ������Ϊ��0Ϊ�ǿգ�1Ϊ�գ�:" << ListEmpty(L) << endl;//������ӡ��1������Ϊ�����������0��1���㣬��0����ʾfasle����1����ʾtrue
	ListInsert(L, 1, 1);//λ��1����1
	ListInsert(L, 1, 2);//λ��1����2
	ListInsert(L, 1, 3);//λ��1����3
	ListInsert(L, 1, 4);//λ��1����4
	ListInsert(L, 1, 5);//λ��1����5
	ListInsert(L, 2, 6);//λ��2����6
	ListInsert(L, 2, 7);//λ��2����7
	ListInsert(L, 2, 8);//λ��2����8
	ListInsert(L, 2, 9);//λ��2����9
	ListInsert(L, 2, 10);//λ��2����10
	ListInsert(L, 1, 2);//λ��1����2
	TraverseList(L);//����
	GetElem(L, 2, e);//��ȡλ��2��Ԫ��
	cout << "λ��2��Ԫ��Ϊ��" << e << endl;
	LocateElem(L, 2);//��ȡԪ��2��λ��
	cout << "˳���ĳ���Ϊ��" << ListLength(L) << endl;
	cout << "˳�����пղ������Ϊ��0Ϊ�ǿգ�1Ϊ�գ�:" << ListEmpty(L) << endl;
	ListDelete(L, 1);//ɾ��λ��1��Ԫ��
	TraverseList(L);//����
	ClearList(L);
	TraverseList(L);//����
	DestroyList(L);
	return 0;
}