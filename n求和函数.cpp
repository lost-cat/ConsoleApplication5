#include <iostream>
using namespace std;
int f(int n);

int main()
{
	cout << "请输入一个整数" << endl;
	int a;
	cin >> a;
	cout << "从1到n的和为" << f(a);

}
int f(int n)
{
	if (n==0)
	{
		return 0;
	}
	else
	{
		return n + f(n - 1);
	}


}