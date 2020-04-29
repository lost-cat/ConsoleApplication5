#include <iostream>
using namespace std;
int	f1(int a, int b);


int main()
{
	cout << "请输入两个整数" << endl;
	int a, b;
	cin >> a >> b;
	int c = f1(a, b);
	cout << "最大公倍数为" << (a * b / c);//最大公倍数为a*b除以最大公约数。
	return 0;
}

int f1(int a, int b)
{
	if (a==b)			//如果a=b，则最大公约数即为a
	{
		cout << "最大公约数为" << a;
	}
	else if (a<b)//判断a b的大小
	{
		int t = a;
		a = b;
		b = t;
	}
	while (a!=b)	//更相减损法
	{
		int t = a - b;
		if(t==b)
		{
			cout << "最大公约数为" << t;
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
