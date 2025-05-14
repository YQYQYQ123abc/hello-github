#include<iostream>
using namespace std;//导入库并使库可以直接方便地使用

typedef int ElemType;//定义顺序表的数据类型为ElemType，实际上是对int进行重命名--int等效于ElemType

const int Maxsize = 100;//定义顺序表的大小，因为顺序表是以数组为基础的数据结构，需要规定大小

typedef struct {
	ElemType* elem;//用顺序表元素的数据类型定义一个基地址，后续将以此分配数组空间
	int length;//当前顺序表的长度（大小），也就是它的数据元素的个数
}SeqList;//顺序表的定义，也就是一个顺序表里面应该有的东西（可以根据需求自己多添加东西，但在学习期间多按照要求来）

bool Init(SeqList&);//初始化顺序表，初始化就是要使得这个顺序表的概念具体存在（占有内存空间）；功能是分配数组空间，确定顺序表大小
void DestroyList(SeqList&);//销毁顺序表，将初始化分配的空间销毁
bool ClearList(SeqList&);//置空，也就是清空顺序表，所有元素置0或NULL
bool ListEmpty(SeqList&);//判断顺序表是不是空
int ListLength(SeqList&);//获取顺序表的长度（大小，即数据元素的个数）
int GetElem(SeqList&, int, ElemType&);//获取某一位置的元素
void LocateElem(SeqList&, ElemType);//获得某一元素的位置
bool ListInsert(SeqList&, int, ElemType);//插入元素
void ListDelete(SeqList&, int);//删除指定位置元素
int TraverseList(SeqList&);//遍历