#include"SeqList_˳���.h"

bool Init(SeqList& L)//��ʼ��˳�����ʼ������Ҫʹ�����˳���ĸ��������ڣ�ռ���ڴ�ռ䣩�������Ƿ�������ռ䣬ȷ��˳����С
{
	L.elem = new ElemType[Maxsize];//��new����һ���ռ��СΪMaxsize������ռ�
	if (!L.elem)//���Ƿ���ռ�ʧ�ܵĿ��ܣ�����һ��if���
	{
		return false;//����ʧ�ܣ�����false
	}
	L.length = 0;//��ʱ�ոշ���ռ䣬û��Ԫ�أ�����Ϊ0
	return true;//��ʼ���ɹ�����true
}
void DestroyList(SeqList& L)//����˳�������ʼ������Ŀռ�����
{
	delete L.elem;//��new�ڻ���ַelem�����������ռ䣬��delete�����������ռ�����
	L.elem = NULL;//������Ϊ˳������ٵı�־��elem��˵�ǻ���ַ����Ҳ��ָ�룬����ָ��NULL��ʾ�ռ䱻���٣�
}
bool ClearList(SeqList& L)//�ÿգ�Ҳ�������˳�������Ԫ����0��NULL
{
	if (L.length == 0)//�ѿյ����
	{
		cout << "˳����ѿգ���������ÿղ���" << endl;
		return true;
	}
	for (int i = 0; i < L.length; i++)//�ǿյ��������forѭ������ÿղ���
	{
		L.elem[i] = NULL;//�ÿչؼ���䣬L.elem[i]=0Ҳ����
	}
	L.length = 0;//�ڷǿյ����������ÿղ�����Ҫ��˳���Ĵ�С��Ϊ0����Ϊ�ÿպ��û������Ԫ���ˣ��ÿյ�0��������Ԫ�أ�
	return true;
}
bool ListEmpty(SeqList& L)//�ж�˳����ǲ��ǿ�
{
	if (L.length != 0)//�ǿյ����
	{
		return false;//����false
	}
	return true;//������Ƿǿյ�����ͻ᷵��true
}
int ListLength(SeqList& L)//��ȡ˳���ĳ��ȣ���С��������Ԫ�صĸ�����
{
	return L.length;//˳��������Ԫ�صĸ����������ĳ���length
}
int GetElem(SeqList& L, int i, ElemType& e)//��ȡĳһλ�õ�Ԫ��
{
	if (i<0 || i>L.length)//˳���Ԫ�ط�Χ֮�⣬�޷�������ȷ����
	{
		cout << "������Χ���޷����в���" << endl;
		return -1;
	}
	e = L.elem[i - 1];
	//cout << "λ�����" << i << "����Ԫ��Ϊ��" << L.elem[i - 1] << endl;
	return 0;
}
void LocateElem(SeqList& L, ElemType e)//���ĳһԪ�ص�λ��
{
	for (int i = 0; i < L.length; i++)
	{
		if (L.elem[i] == e)
		{
			cout << "Ԫ��" << e << "��λ�����Ϊ��" << i+1 <<endl;
			//break;//���break��ʾ������˳����е�һ�����ֵ�Ԫ��e��λ�����
		}
	}
}
bool ListInsert(SeqList& L, int i, ElemType e)//����Ԫ��
{
	if (i<0 || i>L.length + 1)//i�ķ�Χ���ڲ��뷶Χ���������1��ԭ���������������Ԫ�أ�����λ�ò���length�ķ�Χ
	{
		return false;//����ʧ��
	}
	for (int j = L.length; j > i-1; j--)//i�ڲ���ķ�Χ�������Ҫע�����i��˳����λ����ţ�j��������ţ��ɸ������ճ̶�����ʹ�ã�
	{
		L.elem[j] = L.elem[j - 1];//�ڵ�i��Ԫ�غ��Ԫ�ض�Ҫ��������һλ��ͨ���Ѻ��������Ԫ�ص�ֵ����ǰ�������Ԫ�ص�ֵ�Ĳ��������λ��
	}
	L.elem[i - 1] = e;
	L.length += 1;
	return true;
}
void ListDelete(SeqList& L, int i)//ɾ��ָ��λ��Ԫ��
{
	if (i<0 || i> L.length)//����ɾ���ķ�Χ֮��
	{
		cout << "��Χ����������ʧ��" << endl;
	}
	else//��ɾ���ķ�Χ֮��
	{
		cout << "ɾ��λ�����" << i << "��Ԫ��Ϊ��" << L.elem[i - 1] << endl;//��ӡɾ����Ԫ��
		for (int j = i - 1; j < L.length - 1; j++)//ͨ��forѭ���ƶ�Ԫ�أ��������ǰ���ƶ�һλ��
		{
			L.elem[j] = L.elem[j + 1];//ǰ��ĵ��ں�һλ��ֵ�������λ����
		}
		L.length -= 1;//ɾ��Ԫ�غ��С��1
	}
}
int TraverseList(SeqList& L)//����
{
	if (ListEmpty(L))//�ձ��޷����������
	{
		cout << "˳���Ϊ�գ��޷����б�������" << endl;
		return -1;//����ʧ��
	}
	cout << "˳���������Ϊ��";//�ǿձ���Խ��б��������
	for (int i = 0; i < L.length; i++)//ͨ��ѭ����ӡ��ÿһ������Ԫ��
	{
		cout << L.elem[i] << " ";//��ӡ�ո��Ǹ�������Ԫ�أ�����
	}
	cout << endl;//���У����۵�ԭ��
	return 0;//�����ɹ�
}