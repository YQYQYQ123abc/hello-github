#include"SeqList_顺序表.h"

bool Init(SeqList& L)//初始化顺序表，初始化就是要使得这个顺序表的概念具体存在（占有内存空间）；功能是分配数组空间，确定顺序表大小
{
	L.elem = new ElemType[Maxsize];//用new分配一个空间大小为Maxsize的数组空间
	if (!L.elem)//考虑分配空间失败的可能，给予一个if语句
	{
		return false;//分配失败，返回false
	}
	L.length = 0;//此时刚刚分配空间，没有元素，长度为0
	return true;//初始化成功返回true
}
void DestroyList(SeqList& L)//销毁顺序表，将初始化分配的空间销毁
{
	delete L.elem;//用new在基地址elem上面分配数组空间，用delete将分配的数组空间销毁
	L.elem = NULL;//可以作为顺序表被销毁的标志（elem虽说是基地址，但也是指针，将其指向NULL表示空间被销毁）
}
bool ClearList(SeqList& L)//置空，也就是清空顺序表，所有元素置0或NULL
{
	if (L.length == 0)//已空的情况
	{
		cout << "顺序表已空，无需进行置空操作" << endl;
		return true;
	}
	for (int i = 0; i < L.length; i++)//非空的情况，用for循环完成置空操作
	{
		L.elem[i] = NULL;//置空关键语句，L.elem[i]=0也可以
	}
	L.length = 0;//在非空的情况下完成置空操作后要是顺序表的大小变为0，因为置空后便没有数据元素了（置空的0不是数据元素）
	return true;
}
bool ListEmpty(SeqList& L)//判断顺序表是不是空
{
	if (L.length != 0)//非空的情况
	{
		return false;//返回false
	}
	return true;//如果不是非空的情况就会返回true
}
int ListLength(SeqList& L)//获取顺序表的长度（大小，即数据元素的个数）
{
	return L.length;//顺序表的数据元素的个数就是它的长度length
}
int GetElem(SeqList& L, int i, ElemType& e)//获取某一位置的元素
{
	if (i<0 || i>L.length)//顺序表元素范围之外，无法进行正确操作
	{
		cout << "超出范围，无法进行操作" << endl;
		return -1;
	}
	e = L.elem[i - 1];
	//cout << "位置序号" << i << "处的元素为：" << L.elem[i - 1] << endl;
	return 0;
}
void LocateElem(SeqList& L, ElemType e)//获得某一元素的位置
{
	for (int i = 0; i < L.length; i++)
	{
		if (L.elem[i] == e)
		{
			cout << "元素" << e << "的位置序号为：" << i+1 <<endl;
			//break;//添加break表示仅查找顺序表中第一个出现的元素e的位置序号
		}
	}
}
bool ListInsert(SeqList& L, int i, ElemType e)//插入元素
{
	if (i<0 || i>L.length + 1)//i的范围不在插入范围的情况，加1的原因是最后面可以添加元素，而该位置不在length的范围
	{
		return false;//插入失败
	}
	for (int j = L.length; j > i-1; j--)//i在插入的范围的情况（要注意的是i是顺序表的位置序号，j是数组序号，可根据掌握程度自行使用）
	{
		L.elem[j] = L.elem[j - 1];//在第i个元素后的元素都要往后面移一位（通过把后面的数据元素的值等于前面的数据元素的值的操作完成移位）
	}
	L.elem[i - 1] = e;
	L.length += 1;
	return true;
}
void ListDelete(SeqList& L, int i)//删除指定位置元素
{
	if (i<0 || i> L.length)//不在删除的范围之列
	{
		cout << "范围超出，操作失败" << endl;
	}
	else//在删除的范围之列
	{
		cout << "删除位置序号" << i << "的元素为：" << L.elem[i - 1] << endl;//打印删除的元素
		for (int j = i - 1; j < L.length - 1; j++)//通过for循环移动元素（后面的往前面移动一位）
		{
			L.elem[j] = L.elem[j + 1];//前面的等于后一位的值，完成移位操作
		}
		L.length -= 1;//删除元素后大小减1
	}
}
int TraverseList(SeqList& L)//遍历
{
	if (ListEmpty(L))//空表无法遍历的情况
	{
		cout << "顺序表为空，无法进行遍历操作" << endl;
		return -1;//遍历失败
	}
	cout << "顺序表遍历结果为：";//非空表可以进行遍历的情况
	for (int i = 0; i < L.length; i++)//通过循环打印出每一个数据元素
	{
		cout << L.elem[i] << " ";//打印空格是隔开数据元素，美观
	}
	cout << endl;//空行，美观等原因
	return 0;//遍历成功
}