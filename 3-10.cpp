#include <iostream>
using namespace std;
int	f1(int a, int b);


int main()
{
	cout << "��������������" << endl;
	int a, b;
	cin >> a >> b;
	int c = f1(a, b);
	cout << "��󹫱���Ϊ" << (a * b / c);//��󹫱���Ϊa*b�������Լ����
	return 0;
}

int f1(int a, int b)
{
	if (a==b)			//���a=b�������Լ����Ϊa
	{
		cout << "���Լ��Ϊ" << a;
	}
	else if (a<b)//�ж�a b�Ĵ�С
	{
		int t = a;
		a = b;
		b = t;
	}
	while (a!=b)	//�������
	{
		int t = a - b;
		if(t==b)
		{
			cout << "���Լ��Ϊ" << t;
			return t;
		}
		else if (t > b)
		{
			a = t;
		}
		else
		{
			a = b;
			b = t;
		}
		
	}
	
}
