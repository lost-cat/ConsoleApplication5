#include <iostream>
using namespace std;
int f(int n);

int main()
{
	cout << "������һ������" << endl;
	int a;
	cin >> a;
	cout << "��1��n�ĺ�Ϊ" << f(a);

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