#include"SeqList_顺序表.h"
int main()
{
	SeqList L;
	ElemType e;
	Init(L);
	TraverseList(L);//遍历
	cout << "顺序表的长度为：" << ListLength(L) << endl;
	cout << "顺序表的判空操作结果为（0为非空，1为空）:" << ListEmpty(L) << endl;//结果会打印“1”，因为布尔运算就是0、1运算，“0”表示fasle，“1”表示true
	ListInsert(L, 1, 1);//位置1插入1
	ListInsert(L, 1, 2);//位置1插入2
	ListInsert(L, 1, 3);//位置1插入3
	ListInsert(L, 1, 4);//位置1插入4
	ListInsert(L, 1, 5);//位置1插入5
	ListInsert(L, 2, 6);//位置2插入6
	ListInsert(L, 2, 7);//位置2插入7
	ListInsert(L, 2, 8);//位置2插入8
	ListInsert(L, 2, 9);//位置2插入9
	ListInsert(L, 2, 10);//位置2插入10
	ListInsert(L, 1, 2);//位置1插入2
	TraverseList(L);//遍历
	GetElem(L, 2, e);//获取位置2的元素
	cout << "位置2的元素为：" << e << endl;
	LocateElem(L, 2);//获取元素2的位置
	cout << "顺序表的长度为：" << ListLength(L) << endl;
	cout << "顺序表的判空操作结果为（0为非空，1为空）:" << ListEmpty(L) << endl;
	ListDelete(L, 1);//删除位置1的元素
	TraverseList(L);//遍历
	ClearList(L);
	TraverseList(L);//遍历
	DestroyList(L);
	return 0;
}